module Styles = {
  /*Open the Css module, so we can access the style properties below without prefixing them with Css.*/
  open Css;

  let list =
    style([display(flexBox), flexDirection(column), alignItems(center)]);

  let contentWidth = pct(50.0);

  let place = backgroundUrl =>
    style([
      display(flexBox),
      fontFamily("arial"),
      flexDirection(column),
      alignItems(center),
      textAlign(center),
      width(contentWidth),
      height(px(400)),
      position(relative),
      marginTop(px(50)),
      marginBottom(px(50)),
      justifyContent(center),
      before([
        backgroundImage(url(backgroundUrl)),
        contentRule(""),
        height(pct(100.0)),
        position(absolute),
        opacity(0.3),
        width(pct(100.0)),
        backgroundRepeat(noRepeat),
        backgroundSize(cover),
        backgroundPosition(px(0), px(0)),
      ]),
      selector("&:hover > h2", [display(none)]),
      selector("&:hover > div#description", [display(flexBox)]),
      selector(
        "&:hover > a > button",
        [
          display(flexBox),
          visibility(visible),
          backgroundColor(black),
          color(white),
          paddingTop(px(15)),
          paddingBottom(px(15)),
          paddingRight(px(32)),
          paddingLeft(px(32)),
          textAlign(center),
          textDecoration(none),
          display(inlineBlock),
          fontSize(px(16)),
          borderRadius(px(10)),
          opacity(0.8),
          zIndex(2),
        ],
      ),
    ]);

  let search =
    style([
      width(contentWidth),
      height(px(30)),
      display(flexBox),
      flexDirection(row),
      marginTop(px(40)),
      fontSize(px(20)),
      fontFamily("arial"),
      opacity(0.5),
    ]);

  let placeName =
    style([
      display(flexBox),
      width(pct(100.0)),
      opacity(0.8),
      fontSize(px(75)),
      justifyContent(center),
    ]);

  let placeDescription =
    style([
      display(none),
      flexDirection(row),
      fontFamily("arial"),
      fontWeight(600),
      fontSize(px(35)),
      opacity(1.0),
      paddingRight(px(10)),
      paddingLeft(px(10)),
    ]);

  let button = style([display(none), visibility(hidden)]);
};

/* State declaration */
type state = {searchTerm: string};

/* Action declaration */
type action =
  | Search(string);

let component = ReasonReact.reducerComponent("NamesFromScratch");

let make = _children => {
  ...component,

  initialState: () => {searchTerm: ""},

  reducer: (action, _state) =>
    switch (action) {
    | Search(string) => ReasonReact.Update({searchTerm: string})
    },

  render: _self =>
    <div className=Styles.list>
      <input
        className=Styles.search
        placeholder="Search"
        onChange={
          event => _self.send(Search(event->ReactEvent.Form.target##value))
        }
      />
      {
        ReasonReact.array(
          Belt.Array.map(_self.state.searchTerm->Utils.findPlace, place =>
            <div className={Styles.place(place.image.url)} key={place.id}>
              <h2 className=Styles.placeName> {Utils.s(place.name)} </h2>
              <div id="description" className=Styles.placeDescription>
                {Utils.s(place.description)}
              </div>
              <a href={place.href} target="_blank">
                <button className=Styles.button>
                  {Utils.s("Read about the ")}
                  {Utils.s(place.name)}
                </button>
              </a>
            </div>
          ),
        )
      }
    </div>,
};
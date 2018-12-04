let s = string => ReasonReact.string(string);

let placesArray = Array.of_list(Data.places);

let arrayOfNames = Belt.Array.map(placesArray, place => place.name);

let findPlaceFrom = (places: array(Data.place), place: string) =>
  Belt.Array.keep(places, pl =>
    Js.String.startsWith(
      place |> Js.String.toLowerCase,
      pl.name |> Js.String.toLowerCase,
    )
    || Js.String.includes(
         place |> Js.String.toLowerCase,
         pl.name |> Js.String.toLowerCase,
       )
  );

let findPlace = placesArray |> findPlaceFrom;
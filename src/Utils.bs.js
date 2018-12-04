// Generated by BUCKLESCRIPT VERSION 4.0.7, PLEASE EDIT WITH CARE
'use strict';

var $$Array = require("bs-platform/lib/js/array.js");
var Belt_Array = require("bs-platform/lib/js/belt_Array.js");
var Data$ReactTemplate = require("./Data.bs.js");

function s(string) {
  return string;
}

var placesArray = $$Array.of_list(Data$ReactTemplate.places);

var arrayOfNames = Belt_Array.map(placesArray, (function (place) {
        return place[/* name */1];
      }));

function findPlaceFrom(places, place) {
  return Belt_Array.keep(places, (function (pl) {
                if (pl[/* name */1].toLowerCase().startsWith(place.toLowerCase())) {
                  return true;
                } else {
                  return pl[/* name */1].toLowerCase().includes(place.toLowerCase());
                }
              }));
}

function findPlace(param) {
  return findPlaceFrom(placesArray, param);
}

exports.s = s;
exports.placesArray = placesArray;
exports.arrayOfNames = arrayOfNames;
exports.findPlaceFrom = findPlaceFrom;
exports.findPlace = findPlace;
/* placesArray Not a pure module */

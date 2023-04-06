module.exports = {
  jsonuml: ($) =>
    seq(
      "@startjson",
      optional(field("json", repeat($._commandjson))),
      "@endjson",
    ),
  _commandjson: $ => /[^\n]+/g
};

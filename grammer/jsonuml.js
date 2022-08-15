module.exports = {
  jsonuml: ($) =>
    seq(
      "@startjson",
      optional($.json),
      "@endjson",
    ),
};

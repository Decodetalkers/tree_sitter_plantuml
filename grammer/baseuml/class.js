module.exports = {
  //_typedefs: ($) => repeat($.typedef),
  typedef: ($) =>
    choice(
      $._abstract,
      $._interface,
    ),
  _abstract: ($) =>
    seq(
      "abstract",
      optional("class"),
      $.identifier,
    ),
  _interface: ($) =>
    seq(
      "interface",
      $.identifier,
    ),
};

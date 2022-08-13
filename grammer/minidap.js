module.exports = {
  mindmapunit: ($) =>
    seq(
      $._minmapstart,
      $.identifier,
    ),
  _minmapstart: ($) => /\*+/,
};

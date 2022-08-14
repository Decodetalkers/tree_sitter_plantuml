module.exports = {
  mindmap: ($) =>
    seq(
      "@startmindmap",
      repeat($.mindmapunit),
      "@endmindmap",
    ),
  mindmapunit: ($) =>
    seq(
      $._minmapstart,
      $.identifier,
    ),
  _minmapstart: ($) => /\*+/,
};

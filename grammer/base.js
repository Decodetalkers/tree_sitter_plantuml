module.exports = {
  baseuml: ($) =>
    seq(
      "@startuml",
      choice(
        repeat($.typedef),
        repeat(
          choice(
            $.statedec,
            $.astate,
          ),
        ),
      ),
      "@enduml",
    ),
  mindmap: ($) =>
    seq(
      "@startmindmap",
      repeat($.mindmapunit),
      "@endmindmap",
    ),
  yamluml: ($) =>
    seq(
      "@startyaml",
      "@endyaml",
    ),
  jsonuml: ($) =>
    seq(
      "@startjson",
      "@endjson",
    ),
  identifier: ($) => /[a-zA-Z]+/,
  number: ($) => /\d+/,
};

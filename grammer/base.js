module.exports = {
  baseuml: ($) =>
    seq(
      "@startuml",
      repeat($.typedef),
      "@enduml",
    ),
  mindmap: ($) =>
    seq(
      "@startmindmap",
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

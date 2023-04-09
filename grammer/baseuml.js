module.exports = {
  baseuml: ($) =>
    seq(
      "@startuml",
      repeat($.command),
      "@enduml",
    ),
  saltuml: $ =>
    seq(
      "@startsalt",
      repeat($.command),
      "@endsalt"
    ),
  gannttuml: $ =>
    seq(
      "@startgantt",
      repeat($.command),
      "@endgantt"
    )
};

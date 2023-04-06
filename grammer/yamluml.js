module.exports = {
  yamluml: ($) =>
    seq(
      "@startyaml",
      optional(field("yaml", repeat($._commandyaml))),
      "@endyaml",
    ),
  _commandyaml: $ => /[^\n]+/g
};

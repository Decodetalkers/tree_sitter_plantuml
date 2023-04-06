const baseuml = require("./grammer/baseuml");
const jsonuml = require("./grammer/jsonuml");
const yamluml = require("./grammer/yamluml");
module.exports = grammar({
  name: "plantuml",
  conflicts: ($) => [
    // NOTE:# is also key in html mark
    // also mark the color,
    // so they must be conflicts
    [$.colorleader, $.uniqkey],
  ],

  rules: {
    plantuml: ($) => choice($.baseuml, $.yamluml, $.jsonuml),
    ...yamluml,
    ...baseuml,
    ...jsonuml,
  },
});

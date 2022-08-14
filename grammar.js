const basetypes = require("./grammer/basetypes");
const baseuml = require("./grammer/baseuml");
const mindmap = require("./grammer/minidap");
const jsonuml = require("./grammer/jsonuml");
const yamluml = require("./grammer/yamluml");
module.exports = grammar({
  name: "plantuml",

  rules: {
    plantuml: ($) =>
      choice(
        $.baseuml,
        $.mindmap,
        $.yamluml,
        $.jsonuml,
      ),
    ...baseuml,
    ...basetypes,
    ...mindmap,
    ...jsonuml,
    ...yamluml,
  },
});

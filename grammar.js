const mindmap = require("./grammer/minidap");
const swing = require("./grammer/swing");
const base = require("./grammer/base");
const class_ = require("./grammer/class");
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
    ...class_,
    ...base,
    ...swing,
    ...mindmap,
  },
});

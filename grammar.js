const base = require("./grammer/base.js");
const class_ = require("./grammer/class.js");
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
  },
});

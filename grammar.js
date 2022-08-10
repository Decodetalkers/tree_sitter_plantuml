const base = require("./grammer/base.js");
const class_ = require("./grammer/class.js");
module.exports = grammar({
  name: "plantuml",
  rules: {
    plantuml: ($) =>
      seq(
        "@startuml",
				repeat($.typedef),
        "@enduml",
      ),
    ...class_,
    ...base,
  },
});

const swim = require("./baseuml/swim");
const class_ = require("./baseuml/class");
module.exports = {
  baseuml: ($) =>
    seq(
      "@startuml",
      choice(
        repeat($.typedef),
        repeat($._sequenceunit),
      ),
      "@enduml",
    ),
  ...swim,
  ...class_,
};

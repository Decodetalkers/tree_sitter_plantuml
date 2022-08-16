const sequence = require("./baseuml/sequence");
const class_ = require("./baseuml/class");
const usecases = require("./baseuml/usecases");
module.exports = {
  baseuml: ($) =>
    seq(
      "@startuml",
      optional(
        choice(
          repeat($.typedef),
          repeat($._sequenceunit),
          repeat($._allcase),
        ),
      ),
      "@enduml",
    ),
  ...sequence,
  ...class_,
  ...usecases,
};

const json = require("./basetypes/json");
module.exports = {
  identifier: ($) => /[a-zA-Z\d]+/,
  number: ($) => /\d+/,
  describe: ($) => /[a-zA-Z\s\p{L}\u4E00-\u9FFF]+/,
  ...json,
};

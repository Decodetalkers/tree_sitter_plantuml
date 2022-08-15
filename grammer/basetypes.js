const json = require("./basetypes/json");
const xml = require("./basetypes/xml");
module.exports = {
  identifier: ($) => /[a-zA-Z\d]+/,
  number: ($) => /\d+/,
  describe: ($) => /[a-zA-Z\s\p{L}\u4E00-\u9FFF]+/,
  ...json,
  ...xml,
};

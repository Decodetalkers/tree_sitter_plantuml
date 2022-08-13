// FIXME this should not use identifier
//
// it need to match space, unicode, chinese and etc
module.exports = {
  statedec: ($) =>
    seq(
      "==",
      $.identifier,
      "==",
    ),
  astate: ($) =>
    seq(
      $.identifier,
      "->",
      $.identifier,
      optional($.statemessage),
    ),
  statemessage: ($) =>
    seq(
      ":",
      $.identifier,
    ),
};

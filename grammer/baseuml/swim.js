// FIXME this should not use identifier
//
// it need to match space, unicode, chinese and etc
module.exports = {
  statedec: ($) =>
    seq(
      "==",
      $.statedescribe,
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
	// now support charactrites and space
	statedescribe: ($) =>  /[a-zA-Z\s\p{L}\u4E00-\u9FFF]+/,
};

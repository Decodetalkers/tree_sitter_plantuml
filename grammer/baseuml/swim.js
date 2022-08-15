// FIXME this should not use identifier
//
// it need to match space, unicode, chinese and etc
// TODO this need to add typedeclare
module.exports = {
  _sequenceunit: ($) =>
    choice(
      $.pardec,
      $.statedec,
      $.astate,
      $.variable,
      $.participantdec,
    ),
  statedec: ($) =>
    seq(
      "==",
      $.describe,
      "==",
    ),
  pardec: ($) =>
    seq(
      $.identifier,
      $.identifier,
      "as",
      $.identifier,
    ),
  astate: ($) =>
    seq(
      $.identifier,
      "->",
      $.identifier,
      optional($.statemessage),
    ),
	// mark it is class name
  variable: ($) =>
    seq(
      field("class",$.identifier),
      $.identifier,
    ),
  participantdec: ($) =>
    seq(
      $.identifier,
      $.identifier,
      "[",
      "=",
      $.identifier,
      $._splitline,
      $.identifier,
      "]",
    ),
  statemessage: ($) =>
    seq(
      ":",
      $.describe,
    ),
  _splitline: ($) => /\-+/,
  // now support charactrites and space
};

module.exports = {
  xml: ($) =>
    repeat(
      choice(
        $.xmlsignalunit,
      ),
    ),
  xmlsignalunit: ($) =>
    seq(
      "<",
      $.identifier,
      "/>",
    ),
  unitstart: ($) =>
    seq(
      "<",
      $.identifier,
      ">",
    ),
  unitend: ($) =>
    seq(
      "</",
      $.identifier,
      ">",
    ),
  xmlmutiunit: ($) =>
    seq(
      $.unitstart,
      optional($.xmldescribe),
      $.unitend,
    ),
  xmldescribe: ($) => /[a-zA-Z\s\n\p{L}\u4E00-\u9FFF]+/,
};

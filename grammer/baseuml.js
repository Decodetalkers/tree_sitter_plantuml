module.exports = {
  baseuml: ($) =>
    seq(
      "@startuml",
      repeat($.command),
      "@enduml",
    ),
  command: ($) => seq(repeat1($._command_unit), "\n"),
  _command_unit: $ => choice(
    $.message,
    $.block,
    $.string,
    $.method,
    $.uniqkey,
    $.color,
    $.identifier,
    $.comment,
  ),
  method: ($) => seq(
    $.identifier,
    "()",
  ),
  message: ($) => seq(
    "$",
    $.identifier,
    "(",
    optional($.string),
    ")",
  ),
  block: $ => choice(
    $._block_1,
    $._block_2,
    $._block_3,
  ),
  _block_1: $ => seq(
    "{",
    repeat($.command),
    "}",
  ),
  _block_2: $ => seq(
    "[",
    repeat($.command),
    "]",
  ),
  _block_3: $ => seq(
    "(",
    repeat($.command),
    ")",
  ),
  uniqkey: ($) => choice(
    ".",
    ">",
    "<",
    "_",
    ":",
    "*",
    "+",
    "-",
    "#",
    "!",
    "/",
    "|",
  ),
  string: ($) =>
    seq(
      '"',
      optional(
        repeat(
          choice(
            token.immediate(prec(1, /[^"\\]+/)),
            $.escape_sequence,
          )
        )
      ),
      '"'
    ),
  escape_sequence: ($) =>
    token.immediate(
      seq(
        "\\",
        choice(
          /[^xu0-7]/,
          /[0-7]{1,3}/,
          /x[0-9a-fA-F]{2}/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/
        )
      )
    ),
  color: $ => seq($.colorleader, $.identifier),
  colorleader: $ => "#",
  identifier: $ => /[a-zA-Z0-9]+/,
  // TODO: mutiline comment
  comment: $ => choice($._signallinecomment, $._mutilinecomment),
  _signallinecomment: (_) => token(seq("'", /[^\n]+/g)),

  _mutilinecomment: (_) => seq(
    "/'",
    repeat(/[^\n^']+/g),
    '\'/'
  ),

};

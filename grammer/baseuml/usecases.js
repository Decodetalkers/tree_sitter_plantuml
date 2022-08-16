module.exports = {
  _allcase: ($) =>
    choice(
      $.casestate,
      $.actorstate,
    ),
  // usecase
  casestate: ($) =>
    choice(
      $._blockstate,
      $._keywordstate,
    ),
  unitusercase: ($) =>
    seq(
      "(",
      $.casedescribe,
      ")",
    ),
  _blockstate: ($) =>
    seq(
      $.unitusercase,
      optional(seq(
        "as",
        field(
          "alias",
          choice(
            seq(
              "(",
              $.identifier,
              ")",
            ),
            $.identifier,
          ),
        ),
      )),
    ),
  _keywordstate: ($) =>
    seq(
      "usecase",
      choice(
        $.identifier,
        seq(
          choice(
            seq(
              "(",
              $.casedescribe,
              ")",
            ),
            $.identifier,
          ),
          optional(
            seq(
              "as",
              field("alias", $.identifier),
            ),
          ),
        ),
      ),
    ),
  casedescribe: ($) => /[a-zA-Z\\\s\p{L}\u4E00-\u9FFF]+/,
  // usecaseend
  //
  // actor start
  actorstate: ($) =>
    choice(
      $._actorunit,
      seq(
        "actor",
        choice(
          seq(
            $.identifier,
            optional(
              seq(
                "as",
                field("alias", $.identifier),
              ),
            ),
          ),
          seq(
            $.actorunit,
            "as",
            $.identifier,
          ),
        ),
      ),
    ),
  _actorunit: ($) =>
    seq(
      $.actorunit,
      optional(seq(
        "as",
        field(
          "alias",
          $.identifier,
        ),
      )),
    ),
  actorunit: ($) =>
    seq(
      ":",
      $.casedescribe,
      ":",
    ),
  // actor end
};

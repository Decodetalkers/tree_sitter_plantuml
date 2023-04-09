[
 "@startuml"
 "@startjson"
 "@startyaml"
 "@startmindmap"
 "@enduml"
 "@endjson"
 "@endyaml"
 "@endmindmap"
] @keyword

(uniqkey) @keyword

(string) @string

((identifier) @keyword
  (#any-of? @keyword
		"json"
		"object"
		"actor"
		"class"
	)
)

((identifier) @boolean
  (#any-of? @boolean
		"true"
		"false"
	)
)

(block_style
  head: (identifier) @type.definition
  end: (identifier) @type.definition
)

[
  "("
  ")"
  "{"
  "}"
  "["
  "]"
  "<"
  ">"
] @punctuation.bracket

(block_1
	(identifier) @type.definition
)

(comment) @comment

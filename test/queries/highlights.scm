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

[
  "("
  ")"
  "{"
  "}"
  "["
  "]"
] @punctuation.bracket

(block_1
	(identifier) @type.definition
)

(comment) @comment

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

((identifier) @type.definition
  (#any-of? @type.definition
    "class"
		"json"
		"object"
		"actor"
	)
)

(comment) @comment

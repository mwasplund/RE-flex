Name: "reflex"
Language: "C++|0.1"
Version: "1.0.3"
EnableWarningsAsErrors: false
IncludePaths: [
	"include/"
]
Interface: "Module.cpp"
Source: [
	"lib/convert.cpp"
	"lib/error.cpp"
	"lib/input.cpp"
	"lib/matcher.cpp"
	"lib/pattern.cpp"
	"lib/posix.cpp"
	"lib/unicode.cpp"
	"lib/utf8.cpp"
	"unicode/block_scripts.cpp"
	"unicode/language_scripts.cpp"
	"unicode/letter_scripts.cpp"
]

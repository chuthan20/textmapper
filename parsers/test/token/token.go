// generated by Textmapper; DO NOT EDIT

package token

import (
	"fmt"
)

// Token is an enum of all terminal symbols of the test language.
type Token int

// Token values.
const (
	UNAVAILABLE Token = iota - 1
	EOI
	INVALID_TOKEN
	WHITESPACE
	SINGLELINECOMMENT
	IDENTIFIER
	IDENTIFIER2
	INTEGERCONSTANT
	LASTINT
	TEST      // test
	DECL1     // decl1
	DECL2     // decl2
	EVAL      // eval
	AS        // as
	IF        // if
	ELSE      // else
	LBRACE    // {
	RBRACE    // }
	LPAREN    // (
	RPAREN    // )
	LBRACK    // [
	RBRACK    // ]
	DOT       // .
	DOTDOTDOT // ...
	COMMA     // ,
	COLON     // :
	MINUS     // -
	MINUSGT   // ->
	PLUS      // +
	ESC       // \
	CHAR__    // _
	FOO_      // foo_
	F_A       // f_a
	MULTILINE
	DQUOTE // "
	APOS   // '
	SHARPATID
	ZFOO // Zfoo
	BACKTRACKINGTOKEN
	ERROR
	MULTILINECOMMENT

	NumTokens
)

var tokenStr = [...]string{
	"EOI",
	"INVALID_TOKEN",
	"WHITESPACE",
	"SINGLELINECOMMENT",
	"IDENTIFIER",
	"IDENTIFIER2",
	"INTEGERCONSTANT",
	"LASTINT",
	"test",
	"decl1",
	"decl2",
	"eval",
	"as",
	"if",
	"else",
	"{",
	"}",
	"(",
	")",
	"[",
	"]",
	".",
	"...",
	",",
	":",
	"-",
	"->",
	"+",
	"\\",
	"_",
	"foo_",
	"f_a",
	"MULTILINE",
	"\"",
	"'",
	"SHARPATID",
	"Zfoo",
	"BACKTRACKINGTOKEN",
	"ERROR",
	"MULTILINECOMMENT",
}

func (tok Token) String() string {
	if tok >= 0 && int(tok) < len(tokenStr) {
		return tokenStr[tok]
	}
	return fmt.Sprintf("token(%d)", tok)
}

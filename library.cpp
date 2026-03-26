module;

#pragma warning(disable:5244)
#pragma warning(disable:4127)
#pragma warning(disable:4244)

#include <reflex/abslexer.h>
#include <reflex/matcher.h>
#include <reflex/posix.h>
#include <reflex/timer.h>
#include <reflex/unicode.h>

export module reflex;

export namespace reflex {
    using reflex::AbstractLexer;
    using reflex::Input;
    using reflex::Matcher;
    using reflex::Pattern;
}
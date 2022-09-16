module;

#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>

#include <windows.h>

export module reflex;

#pragma warning(disable:5244)
#pragma warning(disable:4127)
#pragma warning(disable:4244)

#include "reflex/abslexer.h"
#include "reflex/matcher.h"
#include <reflex/posix.h>
#include <reflex/timer.h>
#include <reflex/unicode.h>
module;

#include <cstring>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>

#include <cstddef>

#if defined(_WIN32)
#include <windows.h>
#else defined(__linux__)
#include <sys/time.h>
#endif

export module reflex;

#pragma warning(disable:5244)
#pragma warning(disable:4127)
#pragma warning(disable:4244)

#include "reflex/abslexer.h"
#include "reflex/matcher.h"
#include <reflex/posix.h>
#include <reflex/timer.h>
#include <reflex/unicode.h>
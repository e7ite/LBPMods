#pragma once

#include <libpsutil.h>

namespace lbp {

// Typical printf implementation in game, but doesn't print until newline
// character is present in output string after formatting.
extern libpsutil::symbol<void(const char *, ...)> buffered_printf;

}  // namespace lbp

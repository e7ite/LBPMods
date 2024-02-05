#pragma once

#include <libpsutil.h>

namespace lbp {

// Typical printf implementation in game, but that doesn't print until newline
// is submitted in file. No big use for this besides sanity check.
extern libpsutil::symbol<void(const char *, ...)> buffered_printf;

}  // namespace lbp

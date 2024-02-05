#include "io.hpp"

#include <libpsutil.h>

namespace lbp {

libpsutil::symbol<void(const char *, ...)> buffered_printf{0x054A068};

}  // namespace lbp

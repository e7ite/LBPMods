
#include <cellstatus.h>
#include <libpsutil.h>
#include <sys/prx.h>

#include "io.hpp"

SYS_MODULE_INFO(LBPMods, 0, 1, 1);
SYS_MODULE_START(_LBPMods_prx_entry);
SYS_MODULE_STOP(_LBPMods_prx_exit);

SYS_LIB_DECLARE_WITH_STUB(LIBNAME, SYS_LIB_AUTO_EXPORT, STUBNAME);
SYS_LIB_EXPORT(_LBPMods_export_function, LIBNAME);

// An exported function is needed to generate the project's PRX stub export
// library
extern "C" int _LBPMods_export_function(void) { return CELL_OK; }

extern "C" int _LBPMods_prx_entry(void) {
  // Temporary sanity test to ensure game functions called correctly.
  printf("Called!\n");
  lbp::buffered_printf("meow %i\n", 0);
  printf("Call done!\n");

  return SYS_PRX_RESIDENT;
}

extern "C" int _LBPMods_prx_exit(void) {
  printf("ByeBye!");

  return SYS_PRX_STOP_OK;
}

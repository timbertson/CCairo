#include <cairo.h>
#include <cairo-pdf.h>
#include <cairo-svg.h>
#include <cairo-ft.h>

#if __APPLE__
  #include "TargetConditionals.h"
  #if TARGET_OS_MAC
    #include <cairo-quartz.h>
  #endif
#endif



/*
 * Prevent code from including config.h directly. You should include
 * scconfig.h instead. This lets us handle win-config.h correctly, and
 * may do more later.
 */
#ifndef _SCCONFIG_H
#error "Include <scconfig.h> rather than using <config.h> directly"
#endif

#define VERSION "1.4.3.svn"

/* #undef BUILD_WINDOWS_VERSION */
/* #undef SC_USE_GDI */
/* #undef SC_USE_GDIPLUS */
/* #undef DLL_USE_NATIVE_API */
/* #undef BUILD_MAC_BUNDLE */
#define HAVE_CMS 1
#define HAVE_LCMS21
#define HAVE_XML 1
#define CMS_INC "lcms2.h"
#define HAVE_CAIRO 1
#define HAVE_CUPS 1
#define HAVE_TIFF 1
#define HAVE_LIBZ 1
#define HAVE_FONTCONFIG 1
#define HAVE_PODOFO 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
/* #undef FT_FREETYPE_H */
#define COMPILE_PYTHON 1
/* #undef WORDS_BIGENDIAN */

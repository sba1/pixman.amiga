#ifndef PROTO_PIXMAN_H
#define PROTO_PIXMAN_H

#ifndef PIXMAN_H
#include <pixman.h>
#endif

/****************************************************************************/

#ifndef __NOLIBBASE__
 #ifndef __USE_BASETYPE__
  extern struct Library * PixmanBase;
 #else
  extern struct PixmanLibrary * PixmanBase;
 #endif /* __USE_BASETYPE__ */
#endif /* __NOLIBBASE__ */

/****************************************************************************/

#ifdef __amigaos4__
 #include <interfaces/pixman.h>
 #ifdef __USE_INLINE__
  #include <inline4/pixman.h>
 #endif /* __USE_INLINE__ */
 #ifndef CLIB_PIXMAN_PROTOS_H
  #define CLIB_PIXMAN_PROTOS_H 1
 #endif /* CLIB_PIXMAN_PROTOS_H */
 #ifndef __NOGLOBALIFACE__
  extern struct PixmanIFace *IPrefix;
 #endif /* __NOGLOBALIFACE__ */
#else /* __amigaos4__ */
 #ifndef CLIB_PIXMAN_PROTOS_H
  #include <clib/pixman_protos.h>
 #endif /* CLIB_PIXMAN_PROTOS_H */
 #if defined(__GNUC__)
  #ifndef __PPC__
   #include <inline/pixman.h>
  #else /* __PPC__ */
   #include <ppcinline/pixman.h>
  #endif /* __PPC__ */
 #elif defined(__VBCC__)
  #ifndef __PPC__
   #include <inline/pixman_protos.h>
  #endif /* __PPC__ */
 #else /* __GNUC__ */
  #include <pragmas/pixman_pragmas.h>
 #endif /* __GNUC__ */
#endif /* __amigaos4__ */

/****************************************************************************/

#endif /* PROTO_PIXMAN_H */

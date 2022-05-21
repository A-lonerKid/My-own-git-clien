#ifndef _ANSI_H
#define _ANSI_H

#if __STDC__ ==1
#define _ANSI   31459 /*COMPILER CLAIMS FULL ANSI CONFORMANCE*/
#endif

#ifdef _ANSI

#define _VOIDSTAR   void *
#define _VOID       void
#define _CONST      const
#define _VOLATILE   volatile
#define _SIZET      size_t

#else
#define _PROTYPE(function, params)     function()
#define _ARGS(params)                  ()

#define _VOIDSTAR   void *
#define _VOID       void
#define _CONST
#define _VOLATILE
#define _SEIZT     int

#endif

#if defined(_MINIX) || _POSIX_C_SOURCE > 0 || defined(_POSIX2_SOURCE)
#undef _POSIX_SOURCE
#define _POSIX_SOURCE 1
#endif

#endif

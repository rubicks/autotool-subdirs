/* github.com/rubicks/autotool-subdirs/src/autosub.c */

#include "autosub.h"

#include <stdio.h>
#include <stdint.h>

#include "autosub-top.h"
#include "config.h"

#define SPIT(FMT, VAR)                     \
  do {                                     \
    printf("%s == " FMT ";\n", #VAR, VAR); \
  } while (0)

#define SPIT_STR(VAR) SPIT("\"%s\"", VAR)
#define SPIT_PTR(VAR) SPIT("%p", VAR)

void *
autosub(void *arg)
{
#if defined(__PRETTY_FUNCTION__)
  SPIT_STR(__PRETTY_FUNCTION__);
#else
  printf("__PRETTY_FUNCTION__ undefined\n");
#endif
  SPIT_STR(AUTOSUB_TOP_STRING);
  SPIT("%lu", (uintptr_t)arg);  // good cast
  return arg;
}

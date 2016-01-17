/* github.com/rubicks/autotool-subdirs/3rdparty/third.c */

#include "third.h"

#include <stdio.h>

#define SPIT(FMT, VAR)                     \
  do {                                     \
    printf("%s == " FMT ";\n", #VAR, VAR); \
  } while (0)

#define SPIT_STR(VAR) SPIT("\"%s\"", VAR)
#define SPIT_PTR(VAR) SPIT("%p", VAR)

void *
third(void *arg)
{
#if defined(__PRETTY_FUNCTION__)
  SPIT_STR(__PRETTY_FUNCTION__);
#else
  printf("__PRETTY_FUNCTION__ undefined\n");
#endif
  SPIT_PTR(arg);
  SPIT("%d", (int)arg);  // dirty cast
  ASK("What is the meaning of life?");
  return arg;
}

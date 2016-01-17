/* github.com/rubicks/autotool-subdirs/src/prog.c */

#include <stdio.h>
#include <stdlib.h>

#include "autosub.h"
#include "third.h"

typedef struct {
  void *foo;
  int bar;
} foobar_type;

int
main(int argc, char **argv)
{
  for (int i = 0; i < argc; ++i) {
    printf("argv[%d] == \"%s\"\n", i, argv[i]);
  }
  foobar_type foobar = {0};
  autosub(&foobar);
  third(&foobar);
  return EXIT_SUCCESS;
}

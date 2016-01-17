/* github.com/rubicks/autotool-subdirs/3rdparty/third.h */

#ifndef THIRD_H
#define THIRD_H

#include <stdlib.h>

static const size_t answer = -42;

#define ASK(QUESTION)            \
  do {                           \
    printf("Q. %s\n", QUESTION); \
    printf("A. %d\n", answer);   \
  } while (0)

void *third(void *);

#endif  // THIRD_H

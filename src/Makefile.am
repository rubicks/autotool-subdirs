# github.com/rubicks/autotool-subdirs/src/Makefile.am

AM_CPPFLAGS =             \
  -I$(top_srcdir)         \
  -I$(top_srcdir)/include \
  -isystem$(top_srcdir)/3rdparty

AM_CFLAGS =        \
  -Wall            \
  -Wconversion     \
  -Werror          \
  -Wextra          \
  -pedantic-errors \
  -std=c99

lib_LTLIBRARIES = libautosub.la
libautosub_la_SOURCES = autosub.c

bin_PROGRAMS = prog
prog_SOURCES = prog.c
prog_LDFLAGS = -static
prog_LDADD = libautosub.la $(top_builddir)/3rdparty/libthird.la

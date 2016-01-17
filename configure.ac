# github.com/rubicks/autotool-subdirs/configure.ac

AC_PREREQ([2.69])
AC_INIT([autotool-subdirs],
        [m4_esyscmd_s([git describe --always --dirty --tags])],
        [rubicks00@gmail.com],
        [autotool-subdirs],
        [https://github.com/rubicks/autotool-subdirs])
AC_LANG_PUSH([C])
AC_CONFIG_SRCDIR([autosub-top.h])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([foreign subdir-objects dist-bzip2 dist-xz tar-pax])
LT_PREREQ([2.4.6])
LT_INIT

AC_PROG_CC_STDC
AC_HEADER_STDC
AC_C_INLINE


AC_CONFIG_FILES([Makefile
                 3rdparty/Makefile
                 include/Makefile
                 src/Makefile])
AC_OUTPUT

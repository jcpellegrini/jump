/*
   Copyright (C) 2015 Jerônimo C. Pellegrini
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#include <stdio.h>
#include <stdarg.h>

#include "error.h"

/**
   this function combines a printf to stderr with an exit.

   - error_code: the code for this error. it will be used as parameter
          to exit(), so will e sent back to the OS.

   - fmt and ...: format string and argumens, similar to the ones for
          printf.
 **/
void error(int error_code, const char *fmt, ...) {
	va_list ap;
	va_start(ap, fmt);
	vfprintf(stdout, fmt, ap);
	exit(error_code);
}

/*
   Copyright (C) 2015 Jerônimo C. Pellegrini.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#ifndef ERROR_H
#define ERROR_H

#define MAP_READ_ERROR  01
#define MAP_WRITE_ERROR 02

void error(int error_code, const char *fmt, ...);

#endif

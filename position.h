/*
   Copyright (C) 2015 Time do Projeto Proex 10/2015.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#ifndef POSITION_H
#define POSITION_H

/**
   position has "x" and "y", which represent its position on the
   map; 
**/
struct position_str {
	int  x;
	int  y;
};

typedef struct position_str  *position;

#endif

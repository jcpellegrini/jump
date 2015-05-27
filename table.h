/*
   Copyright (C) 2015 Time do Projeto Proex 10/2015.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#ifndef TABLE_H
#define TABLE_H

/**
   table has "x" and "y", which represent its position on the
   map; and "symbol", which is the character used to represent it.

   FIXME: the "symbol" attribute is only relevand if we use the
   ASCII representation of the map. If we use a graphical one,
   it won't make sense.
**/
struct table_str {
	int  x;
	int  y;
	
	char *on_table;
	char *msg = "This is a table. Do you wanna know what is on it?";
	char symbol;
};

typedef struct table_str  *table;

#endif

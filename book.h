/*
   Copyright (C) 2015 Time do Projeto Proex 10/2015.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#ifndef BOOK_H
#define BOOK_H

/**
   book has "x" and "y", which represent its position on the
   map; and "symbol", which is the character used to represent it.

   FIXME: the "symbol" attribute is only relevand if we use the
   ASCII representation of the map. If we use a graphical one,
   it won't make sense.
**/
struct book_str {
	int  x;
	int  y;

	char msg[] = "This is a book. Do you wanna read it?";
	char symbol;
};

typedef struct book_str  *book;

#endif

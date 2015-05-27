/*
   Copyright (C) 2015 Time do Projeto Proex 10/2015.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H

/**
   coffee machine has "x" and "y", which represent its position on the
   map; and "symbol", which is the character used to represent it.

   FIXME: the "symbol" attribute is only relevand if we use the
   ASCII representation of the map. If we use a graphical one,
   it won't make sense.
**/
struct coffeemachine_str {
	int  x;
	int  y;

	char *coffee;
	char *msg = "This is a coffee machine. Do you want a coffee?";
	char symbol;
};

typedef struct coffeemachine_str  *coffeemachine;

#endif

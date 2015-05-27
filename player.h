/*
   Copyright (C) 2015 Time do Projeto Proex 10/2015.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#ifndef PLAYER_H
#define PLAYER_H

/**
   player has "x" and "y", which rpresent its position on the
   map; and "symbol", which is the character used to represent it.

   FIXME: the "symbol" attribute is only relevand if we use the
   ASCII representation of the map. If we use a graphical one,
   it won't make sense.
**/
struct player_str {
	int  x;
	int  y;
	char symbol;
};

typedef struct player_str  *player;

#endif

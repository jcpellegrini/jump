/*
   Copyright (C) 2015 Time do Projeto Proex 10/2015.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#ifndef PLAYER_H
#define PLAYER_H

#include "position.h"
#include "item.h"

/**

**/
struct player_str {
	position  pos;
	item     *things;
};

typedef struct player_str  *player;

#endif

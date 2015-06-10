/*
   Copyright (C) 2015 Time do Projeto Proex 10/2015.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#ifndef ITEM_H
#define ITEM_H

#include "position.h"
#include "type.h"

/**
   
**/
struct item_str {
	_type    type;
	position pos;
	char     *name;
};

typedef struct item_str  *item;

#endif

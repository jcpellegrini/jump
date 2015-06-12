/*
   Copyright (C) 2015 Time do Projeto Proex 10/2015.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#ifndef MAP_H
#define MAP_H

#include "player.h"
#include "command.h"

struct map_str {
	int rows;
	int cols;
	char **matrix;
};
typedef struct map_str *map;

map map_create(int rows, int cols);
void map_destroy(map m);
void map_serialize(char *out, map m);
void map_deserialize(map m, char *in);
map map_read(char *filename);
void map_write(map m, char *filename);
int map_move_player(map m, player p, command c);



#endif


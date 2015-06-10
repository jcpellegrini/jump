/* Copyright (C) 2015 Time do Projeto Proex 10/2015.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#include "error.h"
#include "map.h"
#include "player.h"
#include "item.h"

#define SPACE ' '
#define WALL  '#'


void map_destroy(map m) {
}

/**
 **/
int map_seralize (char *out, map m) {
}

/**
   m will be created and allocated by this function.
 **/
int map_deserialize(map m, char *in) {
}

int map_read(map m, FILE in) {
	int i;
        int j;
	int rows;
	int cols;
	assert(NULL != FILE);
	
	if (1 != fscanf(in, "%u", &rows))
		error(MAP_READ_ERROR, "map_read: cannot read number of rows");
	if (1 != fscanf(in, "%u", &cols))
		error(MAP_READ_ERROR, "map_read: cannot read number of columns");
	if (rows==0 || cols==0)
		error(MAP_READ_ERROR, "map must have at least one row and one column");

	map = malloc(sizeof(map_str));
	if (NULL==map)
		error(MAP_READ_ERROR, "map_read: weird -- not enough memory to allocate map dimension (2 unsigned ints!)");
	
	/* allocate map->matrix here*/
	
	if (NULL=map->matrix)
		error(MAP_READ_ERROR, "map_read: not enough memory to allocate map (%u x %u)",rows,cols);

	map->rows = rows;
	map->cols = cols;
	
	
}

int map_write(map m, FILE out) {
}

int map_move_player(map m, player p, command c) {
}



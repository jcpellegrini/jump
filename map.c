/* Copyright (C) 2015 Time do Projeto Proex 10/2015.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "error.h"
#include "map.h"
#include "player.h"
#include "item.h"
#include "command.h"

#define SPACE ' '
#define WALL  '#'


void map_destroy(map m) {
}

/**
 **/
void map_seralize (char *out, map m) {
}

/**
   m will be created and allocated by this function.
 **/
void map_deserialize(map m, char *in) {
}

void get_map_size(int *rows, int *cols, FILE *in) {
        int j;
	char c;
	
	assert(NULL != in);

	*rows = 0;
	*cols = 0;
	j = 0; /* current column */

	c = (char) fgetc(in);
	while (EOF!=c) {
		j++;
		if (c == '\n') {
			(*rows)++;
			
			/* set cols to maximum line size */
			if (j > (*cols))
				*cols = j-1;
			j = 0;
		}
		c = (char) fgetc(in);
	}

	rewind(in);
}

map map_create(int rows, int cols) {
	int i;
	map m = malloc(sizeof(struct map_str));
	
	if (NULL==m)
		error(MAP_READ_ERROR, "map_read: weird -- not enough memory to allocate map dimension (2 unsigned ints!)");
	


	m->matrix = (char**) malloc (sizeof(char*) * rows);
	if (NULL==m->matrix)
		error(MAP_READ_ERROR, "map_read: not enough memory to allocate map (%u x %u)",rows,cols);
	
	for(i=0; i<rows; i++) {
		m->matrix[i] = (char *)malloc(sizeof(char)*cols);
		if (NULL==m->matrix[i])
			error(MAP_READ_ERROR, "map_read: not enough memory to allocate map (%u x %u)",rows,cols);
	}
	
	m->rows = rows;
	m->cols = cols;

	return m;
}

map map_read(char *filename) {
	int i;
	int j;
	int k;
	int rows;
	int cols;
	char c;
	FILE *in;
	map m;

	in = fopen(filename,"r");
	if (NULL==in)
		error(MAP_READ_ERROR, "could not read file \"%s\"", filename);

	/* FIXME: this is unsafe (string may not be what we think it is) */
	printf("reading %s...\n",filename); 
	get_map_size(&rows,&cols,in);

	printf("map has %d rows and %d columns.\n",rows, cols);

	m = map_create(rows, cols);

	c = fgetc(in);
	for (i=0; i<rows; i++) {
		j = 0;
		while ( c != '\n' ) {
			m->matrix[i][j] = c;
			c = fgetc(in);
			j++;
		}
		c = fgetc(in);
		while (j<cols) {
			m->matrix[i][j] = ' ';
			j++;
		}
	}
	fclose(in);
	return m;
}

void map_write(map m, char *filename) {
	int i;
	int j;
	FILE *out;
	
	out = fopen(filename, "w");

	if (NULL==out)
		error(MAP_WRITE_ERROR, "cannot open file \"%s\" for writing\n", filename);
	
	assert(NULL != m);
	assert(NULL != m->matrix);
	
	for (i=0; i< m->rows; i++) {
		for(j=0; j<m->cols; j++)
			fprintf(out, "%c", m->matrix[i][j]);
		fprintf(out,"\n");
	}
	fclose(out);
}

int map_move_player(map m, player p, command c) {
	switch (c) {
	case NORTH:
		break;
	case SOUTH:
		break;
	case EAST:
		break;
	case WEST:
		break;
	}
}



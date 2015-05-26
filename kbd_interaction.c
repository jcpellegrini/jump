/* Copyright (C) 2015 Time do Projeto Proex 10/2015.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#include <stdio.h>

#include "player.h"
#include "readmap.h"

#define SPACE ' '
#define WALL  '#'

void bump() {
}


void keyboard_interact(char **map, player p) {
	FILE *in = stdin;
	int new_x,new_y;
	char cmd;
	for (;;) {
		show_map(map);

		new_x = p->x;
		new_y = p->y;

		fscanf(in,"%c",&cmd);

		/* FIXME: what if we want to translate the commands? */
		switch (cmd) {
			case 'n': new_y--; break;
			case 's': new_y++; break;
			case 'e': new_x++; break;
			case 'w': new_x--; break;
		}

		if (map[new_x][new_y]==WALL)
			bump();
		else if (map[new_x][new_y]==SPACE) {
			p->x=new_x; 
	        	p->y=new_y;
		}
	}

}


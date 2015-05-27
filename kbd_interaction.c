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

/**
   bump() is called when the player hits a wall

   FIXME: implement this
 **/
void bump() {
}


/**
   keyboard_interact implements an interaction loop:
   it will
   1. show the map and the player
   2. wait for a command (n,s,e,w)
   3. change the player's position
   4. start again at (1)
 **/
void keyboard_interact(char **map, player p) {
	FILE *in = stdin;
	int new_x,new_y;
	char cmd;
	for (;;) {
		show_map_player(map,p);

		new_x = p->x;
		new_y = p->y;

		fscanf(in,"%c",&cmd);

		/* FIXME: what if we want to translate the commands? */
		switch (cmd) {
			case 'n': new_x--; break;
			case 's': new_x++; break;
			case 'e': new_y++; break;
			case 'w': new_y--; break;
		}

		if (map[new_x][new_y]==WALL)
			bump();
		else if (map[new_x][new_y]==SPACE) {
			p->x=new_x; 
	        	p->y=new_y;
		}
	}

}


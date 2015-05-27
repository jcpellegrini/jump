/* Copyright (C) 2015 Time do Projeto Proex 10/2015.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#include <stdio.h>
#include <libintl.h>
#define _(str) gettext(str)

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


void finish(FILE *out) {
	fprintf(out,_("goodbye!\n"));
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

    /* FIXME: in and out should be passed as parameters, or
	   be retrieved via an API */
	FILE *in  = stdin;
	FILE *out = stdout;
	int new_x,new_y, dimx, dimy;
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
			case 'q': finish(out); return;

		}

		if (map[new_x][new_y]==WALL)
			bump();
		else if (map[new_x][new_y]==SPACE) {
			p->x=new_x; 
	        p->y=new_y;
		}
	}

}


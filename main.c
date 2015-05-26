/* Copyright (C) 2015 Time do Projeto Proex 10/2015.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#include <stdlib.h>
#include <stdio.h>

#include "player.h"
#include "readmap.h"
#include "kbd_interaction.h"

int main() {
	char *filename;
	char **map;
	player p = malloc(sizeof (struct player_str));


	/* FIXME: */
	p->x = 4;
	p->y = 4;

	filename=malloc(100); /* FIXME: fixed length? */
	map = readmap (filename);

	if (map==NULL) {
		printf("wrong!");
		exit (-1);
	}

	keyboard_interact(map, p);
	exit(0);
}

/* Copyright (C) 2015 Time do Projeto Proex 10/2015.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <libintl.h>
#define _(str) gettext(str)


#include "player.h"
#include "readmap.h"
#include "table.h"
#include "coffeemachine.h"
#include "book.h"
#include "position.h"
#include "kbd_interaction.h"

int main() {
	char *filename;
	char **map;
	player p;
	book b;
	table t;
	coffeemachine cf_m;
	position pos;
	setlocale(LC_ALL,"");
	bindtextdomain("jump","/usr/share/locale");
	textdomain("jump");		
	
	p = malloc(sizeof (struct player_str));
	/* FIXME: */
	p->symbol = '*';
	p->x = 4;
	p->y = 4;
	
	
	b = malloc(sizeof (struct book_str));
	/* FIXME: */
	b->symbol = '!';
	
	// define symbol of the table
	t = malloc(sizeof (struct table_str));
	/* FIXME: */
	t->symbol = '+';

	
	cf_m = malloc(sizeof (struct coffeemachine_str));
	/* FIXME: */
	cf_m->symbol = '-';

	filename=malloc(100);       /* FIXME: fixed length? */
	strcpy(filename,"map.txt"); /* FIXME: user can't choose map
                                              filename */
	map = readmap (filename);

	/* FIXME: */
	find_char(map,b->symbol,pos);
	b->x=pos->x;
	b->y=pos->y

	/* FIXME: */
	find_char(map,t->symbol,pos);
	t->x=pos->x;
	t->y=pos->y

	/* FIXME: */
	find_char(map,cf_m->symbol,pos);
	cf_m->x=pos->x;
	cf_m->y=pos->y

	if (map==NULL) {
		printf(_("cannot read map file!\n"));
		exit (-1);
	}

	keyboard_interact(map, p);
	exit(0);
}

void find_char(char **map, char ch,position pos){
	int i,j;	
	for(i=0;i<;i++){
		for(j=0;j<;j++){
			if(ch==map[i][j]){
				pos->x = i;
				pos->y = j;
			}			
		}
	}
}

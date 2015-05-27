/* Copyright (C) 2015 Time do Projeto Proex 10/2015.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 

 *  Função ReadFile
 *  Sintaxe: char** readmap(char* url)
 *  Descrição: abre um arquivo de texto especificado e retorna sua matriz de caracteres
 *  
 *  Autor: Felipe Anchieta Santos Costa
 *
 *  A implementar: leitura de mapas com dimensão no topo do arquivo :)
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <libintl.h>
#define _(str) gettext(str)

#include "player.h"

#define NLINHAS 20
#define NCOLUNA 20


/*
 readmap (char *url) reads a map from the file specified,
 and returns the map as a matrix (char**).

 example:
   char **M;
   M = readmap (filename);
 */
char** readmap(char* url) {
    
    FILE *arq = fopen(url, "r");
    
    if(!arq) { 
        printf(_("cannot read map file!\n"));
        return NULL;
    } else {
	int i;
	int j = 0;
        char ch;
        char **map = malloc(NLINHAS*sizeof(char *));
        
        if(!map) printf(_("not enough memory!\n"));
        else {
            for(i=0; i < NLINHAS; i++) {
                map[i] = malloc(NCOLUNA*sizeof(char));
                
                if(!map[i]) {
                    printf(_("not enough memory!\n"));
                    return NULL;
                }
            }
        }
        
        i = 0;
            
        while( (ch=fgetc(arq))!= EOF ) {
            
            map[i][j] = ch;
            i++;
            
            if(ch == '\n') {
                i = 0;
                j++;   
            }
        }
        
        fclose(arq);
        return map;
    }
}

/*
   shows the map and the player on standard output.
*/
void show_map_player(char **map, player p) {
	FILE *out = stdout;
	int i,j;
	for(i=0;i<NLINHAS; i++) {
		for(j=0;j<NCOLUNA; j++)
			if (p->x == i && p->y == j)
				fprintf(out,"%c",p->symbol);
			else
				fprintf(out,"%c",map[i][j]);
		fprintf(out,"\n");
	}
}


/*
   shows the map on standard output.
*/
void show_map(char **map) {
	/* FIXME: */
	player p = malloc(sizeof(struct player_str));
	p->symbol=' ';
	show_map_player(map, p);
	free(p);
}

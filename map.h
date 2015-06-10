/*
   Copyright (C) 2015 Time do Projeto Proex 10/2015.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#ifndef MAP_H
#define MAP_H


void map_destroy(map m);
int map_serialize(char *out, map m);
int map_deserialize(map m, char *in);
int map_read(map m, FILE in);
int map_write(map m, FILE out);
int map_move_player(map m, player p, command c);



#endif


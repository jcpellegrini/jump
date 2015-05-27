/*
   Copyright (C) 2015 Time do Projeto Proex 10/2015.
   This file is part of jump. It is free software and it is covered
   by the Affero GNU general public license, version 3.
   See the file LICENSE for details. 
*/

#ifndef READMAP_H
#define READMAP_H

#include "player.h"

char** readmap(char* url);
void show_map(char **map);
void show_map_player(char **map,player p);

#endif

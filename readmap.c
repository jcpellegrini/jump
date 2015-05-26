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
        
        printf("Erro, não foi possivel abrir o arquivo\n");
        return NULL;
        
    } else {
        int i = 0, j = 0;
        char ch;
        char **map = malloc(NLINHAS*sizeof(char *));
        
        if(!map) printf("Sem memória suficiente\n");
        else {
            for(; i < NLINHAS; i++) {
                map[i] = malloc(NCOLUNA*sizeof(char));
                
                if(!map[i]) {
                    printf("Sem memória suficiente\n");
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



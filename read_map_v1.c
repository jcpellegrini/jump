#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


/*
  This file only reads and writes the map from
  a file called "map.txt"
*/
int main(void) {
        char url[]="map.txt";
        FILE *arq;
        arq = fopen(url, "r");
        if(arq == NULL)
            printf("Erro, nao foi possivel abrir o arquivo \n");
        else {
                int i = 0, j = 0;
		/* TODO: following line is a temporary
		   hack */
                char map[20][20];
                char ch;
                while( (ch=fgetc(arq))!= EOF ){
                        map[i][j] = ch;
                        printf("%c", map[i][j]);
                        i++;
                        if(ch == '\n'){
                                i = 0;
                                j ++;
                        }
                }
        }
        fclose(arq);
        return 0;
}


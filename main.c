/* 
 * File:   main.c
 * Author: Diego
 *
 * Created on 1 marzo 2015, 19.38
 */

#include <stdio.h>
#include <stdlib.h>

#define X 3
#define Y 6

/*
 * 
 */
int main(int argc, char** argv) {
    int i, j, riga, colonna, somma = 0;
    int mat[Y][X];
    printf("Inserisci i valori della matrice MAT\n");
    for(j = 0; j < Y; j++) {
        for(i = 0; i < X; i++) {
            printf("Inserisci il valore %d della riga %d : ", i, j);
            scanf("%d", &(mat[j][i]));
        }
    }
    printf("\nInserisci la RIGA da escludere dalla somma : ");
    scanf("%d", &riga);
    printf("\nInserisci la COLONNA da escludere dalla somma : ");
    scanf("%d", &colonna);
    for(i = 0; i < X; i++) {
        mat[riga][i] = 0;
    }
    for(j = 0; j < Y; j++) {
        mat[j][colonna] = 0;
    }
    for(j = 0; j < Y; j++) {
        for(i = 0; i < X; i++) {
            somma = somma + mat[j][i];
        }
    }
    printf("\nLa somma degli elementi della matrice MAT e' : %d\n", somma);
    return (EXIT_SUCCESS);
}

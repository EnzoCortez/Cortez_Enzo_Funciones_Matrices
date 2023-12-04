#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Solicitud de las dimensiones de la matriz*/
void solicitarDimensiones(int *m, int *n) {
    printf("Ingrese las dimensiones de la matriz\n");
    printf("Ingrese el número de filas: ");
    scanf("%d", m);
    printf("Ingrese el número de columnas: ");
    scanf("%d", n);
}

/*Generacion de las matrices*/
void generarMatriz(int m, int n, int matriz[m][n]) {
    srand(time(0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }
}

/*Suma de las matrices*/
void sumarMatrices(int m, int n, int matrizA[m][n], int matrizB[m][n], int matrizC[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

/*Impresion en pantalla de las matrices*/
void imprimirMatriz(int m, int n, int matriz[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
}
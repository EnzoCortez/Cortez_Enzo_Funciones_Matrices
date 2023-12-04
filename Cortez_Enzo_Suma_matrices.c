#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void solicitarDimensiones(int *m, int *n) {
    printf("Ingrese las dimensiones de la matriz\n");
    printf("Ingrese el número de filas: ");
    scanf("%d", m);
    printf("Ingrese el número de columnas: ");
    scanf("%d", n);
}

void generarMatriz(int m, int n, int matriz[m][n]) {
    srand(time(0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }
}
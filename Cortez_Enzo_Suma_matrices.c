#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void solicitarDimensiones(int *m, int *n) {
    printf("Ingrese las dimensiones de la matriz\n");
    printf("Ingrese el número de filas: ");
    scanf("%d", m);
    printf("Ingrese el número de columnas: ");
    scanf("%d", n);
#include <stdio.h>

int main() {
    int m, n, l;

    /* Solicitud de las dimensiones de las matrices */
    
    printf("Ingrese el numero de matrices: ");
    scanf("%d", &l);

    printf("Ingrese el numero de filas: ");
    scanf("%d", &m);

    printf("Ingrese el numero de columnas: ");
    scanf("%d", &n);

    /* Definir las matrices */
    int matrizA[l][m][n];

    /* Inicialización de la matriz */
    for (int k = 0; k < l; k++) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (k == l - 1) {
                    matrizA[k][i][j] = 1; // Última matriz llena de unos
                } else {
                    matrizA[k][i][j] = 0; // Resto de matrices llenas de ceros
                }
            }
        }
    }

    /* Impresión de matrices */
    for (int k = 0; k < l; k++) {
        printf("Matriz %d:\n", k + 1);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", matrizA[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

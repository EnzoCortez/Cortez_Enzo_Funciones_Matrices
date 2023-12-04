#include <stdio.h>

#include <stdio.h>

// Función para solicitar las dimensiones de las matrices
void solicitarDimensiones(int *m, int *n, int *l) {
    printf("Ingrese el número de matrices: ");
    scanf("%d", l);

    printf("Ingrese el número de filas: ");
    scanf("%d", m);

    printf("Ingrese el número de columnas: ");
    scanf("%d", n);
}

// Función para inicializar las matrices según las dimensiones dadas
void inicializarMatrices(int m, int n, int l, int matriz[l][m][n]) {
    for (int k = 0; k < l; k++) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (k == l - 1) {
                    matriz[k][i][j] = 1; // Última matriz llena de unos
                } else {
                    matriz[k][i][j] = 0; // Resto de matrices llenas de ceros
                }
            }
        }
    }
}

// Función para imprimir las matrices en la consola
void imprimirMatrices(int m, int n, int l, int matriz[l][m][n]) {
    for (int k = 0; k < l; k++) {
        printf("Matriz %d:\n", k + 1);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", matriz[k][i][j]); // Imprime los elementos de la matriz
            }
            printf("\n"); // Nueva línea para separar las filas de la matriz
        }
        printf("\n"); // Nueva línea para separar las matrices
    }
}

// Función principal
int main() {
    int m, n, l;

    // Llamada a la función para solicitar las dimensiones de las matrices
    solicitarDimensiones(&m, &n, &l);

    int matrizA[l][m][n]; // Definición de la matriz tridimensional

    // Llamada a la función para inicializar las matrices
    inicializarMatrices(m, n, l, matrizA);

    // Llamada a la función para imprimir las matrices
    imprimirMatrices(m, n, l, matrizA);

    return 0; // Fin del programa
}
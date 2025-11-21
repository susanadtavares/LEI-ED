#include <stdio.h>
#include <stddef.h>

#define ERRO -1

int Esparsa(int *Mat, int M, int N, float Perc) {
   
    float cz = 0;
    int Tam = M * N; // Total de elementos na matriz

    for (int i = 0; i < Tam; i++) {
        if (Mat[i] == 0) {
            cz++;
        }
    }

    float P = cz / Tam;

    if (P > Perc) {
        return 1; // A matriz é esparsa
    } else {
        return 0; // A matriz não é esparsa
    }
}

int main() {
    int vetor[2][3] = {{1, 2, 0}, {0, 0, 3}};

    int *mat = &vetor[0][0]; // Ponteiro para a primeira posição da matriz

    int resultado = Esparsa(*vetor, 2, 3, 0.60);
    if (*vetor == NULL) return ERRO;

    if (resultado != ERRO) {
        if (resultado == 1) {
            printf("A matriz é esparsa.\n");
        } else {
            printf("A matriz não é esparsa.\n");
        }
    }

    return 0;
}

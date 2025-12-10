float mediaUCsAbaixo(Aluno *lista, int n, int lim) {
    int soma = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++)
            if ((lista+i)->listaUC[j].nota < lim)
                soma++;
    }

    return (float)soma / n;
}

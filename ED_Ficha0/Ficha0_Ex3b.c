int qtosPassam(Aluno *lista, int n) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        int soma = 0;
        for (int j = 0; j < 5; j++)
            soma += (lista+i)->listaUC[j].nota;

        int media = (int)((soma / 5.0) + 0.5); // arredonda
        if (media >= 10)
            total++;
    }

    return total;
}

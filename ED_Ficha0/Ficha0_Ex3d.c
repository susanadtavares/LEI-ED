void listaNotas(Aluno *lista, int n, int val, char *nomeFich) {
    FILE *f = fopen(nomeFich, "w");

    for (int i = 0; i < n; i++) {
        fprintf(f, "%s\n", (lista+i)->nome);

        for (int j = 0; j < 5; j++) {
            if ((lista+i)->listaUC[j].nota >= val)
                fprintf(f, "%s - %d\n",
                        (lista+i)->listaUC[j].nome,
                        (lista+i)->listaUC[j].nota);
        }

        fprintf(f, "------------\n");
    }

    fclose(f);
}

int contaInterprete(Musica *lista, int n, char *nome) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (strcmp((lista+i)->interprete, nome) == 0)
            count++;
    return count;
}

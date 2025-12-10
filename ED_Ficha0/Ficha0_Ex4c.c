float mediaMassaEntreAnos(Indiv *lista, int n, int ano1, int ano2) {
    float soma = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int a = (lista+i)->nasc.ano;
        if (a >= ano1 && a <= ano2) {
            soma += (lista+i)->massa;
            count++;
        }
    }

    return (count == 0) ? 0 : soma / count;
}

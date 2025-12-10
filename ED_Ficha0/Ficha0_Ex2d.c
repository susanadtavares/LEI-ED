float gravaFichMusicas (Musica *lista, int n, int ano, char *nFich, char tpMeio) {
    FILE *f = fopen(nFich, "wb");
    if (!f) return -1;

    int soma = 0, count = 0;

    for (int i = 0; i < n; i++) {
        Musica *m = lista + i;

        int ok = 0;
        if (tpMeio == 's' && m->single == 1) ok = 1;
        if (tpMeio == 'n' && m->single == 0) ok = 1;
        if (tpMeio == 'a') ok = 1;

        if (ok && m->ano > ano) {
            fwrite(m, sizeof(Musica), 1, f);
            soma += m->downloads;
            count++;
        }
    }

    fclose(f);

    return (count == 0) ? 0 : (float)soma / count;
}

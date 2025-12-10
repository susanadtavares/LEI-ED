void musicasDownload(Musica *lista, int n, int numD) {
    for (int i = 0; i < n; i++) {
        if ((lista+i)->downloads > numD) {
            printf("Titulo: %s\n", (lista+i)->titulo);
            printf("Interprete: %s\n", (lista+i)->interprete);
            printf("Ano: %d\n", (lista+i)->ano);
            printf("Single: %d\n", (lista+i)->single);
            printf("Downloads: %d\n\n", (lista+i)->downloads);
        }
    }
}

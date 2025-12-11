ptELEMENTO criar_elemento() {
    ptELEMENTO E = (ptELEMENTO) malloc(sizeof(ELEMENTO));
    if (E == NULL) {
        printf("Erro a alocar elemento.\n");
        return NULL;
    }

    E->info = (ptPALAVRA) malloc(sizeof(PALAVRA));
    if (E->info == NULL) {
        printf("Erro a alocar palavra.\n");
        free(E);
        return NULL;
    }

    E->info->texto[0] = '\0';   // palavra vazia
    E->seguinte = NULL;

    return E;
}

ptLISTA criar_lista() {
    ptLISTA L = (ptLISTA) malloc(sizeof(LISTA));
    if (L == NULL) {
        printf("Erro a alocar lista.\n");
        return NULL;
    }

    strcpy(L->lingua, "PT");
    L->num_palavras = 0;
    L->inicio = NULL;

    return L;
}

void inserir_elemento_fim(ptLISTA L, ptELEMENTO E) {
    if (L->inicio == NULL) {
        L->inicio = E;
    } else {
        ptELEMENTO aux = L->inicio;

        while (aux->seguinte != NULL) {
            aux = aux->seguinte;
        }

        aux->seguinte = E;
    }

    E->seguinte = NULL;
    L->num_palavras++;
}

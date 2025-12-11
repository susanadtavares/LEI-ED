void inserir_elemento_inicio(ptLISTA L, ptELEMENTO E) {
    E->seguinte = L->inicio;  // aponta para o antigo primeiro
    L->inicio = E;            // agora este é o novo primeiro
    L->num_palavras++;
}

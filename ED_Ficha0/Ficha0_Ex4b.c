int indSaudaveis(Indiv *lista, int n) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        float imc = (lista+i)->massa / ((lista+i)->altura * (lista+i)->altura);
        if (imc >= 18.5 && imc <= 24.9)
            total++;
    }
    return total;
}

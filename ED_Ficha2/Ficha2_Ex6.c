int validar_elemento(ptELEMENTO E) {
    char *t = E->info->texto;

    for (int i = 0; t[i] != '\0'; i++) {
        if (!isalpha(t[i])) {   // letra?
            return 0;           // inválido
        }
        if (t[i] < 'A' || (t[i] > 'Z' && t[i] < 'a') || t[i] > 'z') {
            return 0;           // fora do intervalo ASCII
        }
    }
    return 1;   // válido
}

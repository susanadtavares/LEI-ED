void ler_elemento(ptELEMENTO E) {
    int valido = 0;

    do {
        printf("Digite a palavra: ");
        scanf("%49s", E->info->texto);

        valido = validar_elemento(E);
        if (!valido) {
            printf("Palavra inválida! Apenas letras não acentuadas são permitidas.\n");
        }
    } while (!valido);
}

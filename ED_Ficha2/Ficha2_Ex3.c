typedef struct {
    char lingua[3];      // 2 chars + '\0'
    int num_palavras;
    ptELEMENTO inicio;
} LISTA;

typedef LISTA* ptLISTA;

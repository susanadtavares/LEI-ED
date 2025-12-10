typedef struct {
    char nome[40];
    int nota;
} UC;

typedef struct {
    int numMec;
    char nome[50];
    UC listaUC[5];
} Aluno;

Aluno *ListAlun = (Aluno*) malloc(nReg * sizeof(Aluno));

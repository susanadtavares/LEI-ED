typedef struct {
    char titulo[50];
    char interprete[50];
    int ano;
    int single;   // 1 ou 0
    int downloads;
} Musica;

Musica *lista = (Musica*) malloc(nMusicas * sizeof(Musica));

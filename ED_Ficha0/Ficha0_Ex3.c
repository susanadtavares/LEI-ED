#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_UCs 5
#define MAX_NOME 50

typedef struct {
    char nome[MAX_NOME];
    float avaliacao;
} UC;

typedef struct {
    int numeroMecanografico;
    char nome[MAX_NOME];
    UC ucs[MAX_UCs];
} ALUNO;

//alinea b)
int quantosPassam(ALUNO *listaAlunos, int nReg){

float media;
int countPass = 0;

for (int i = 0; i<nReg ; i++){
    float soma = 0;
    for(int k=0 ; k<5 ; k++){
        soma += listaAlunos[i].ucs[k].avaliacao;
    }
    media = soma/5;
    if(media>=9.5)
        countPass++;
}
}
//alínea c)
int menores(int countMenor = 0)
if (UC.avaliacao[i]<)
    countMenor++;

    
int main() {
    int nAlunos;  
    printf("Digite o número de alunos a serem registados: ");
    scanf("%d", &nAlunos);

    ALUNO *ListaAlunos = (ALUNO *)malloc(nAlunos * sizeof(ALUNO));

    ListaAlunos[0].numeroMecanografico = 12345;
    strcpy(ListaAlunos[0].nome, "Joao Silva");

    strcpy(ListaAlunos[0].ucs[0].nome, "Matematica");
    ListaAlunos[0].ucs[0].avaliacao = 15.5;

    free(ListaAlunos);

    return 0;
}


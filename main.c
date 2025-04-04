#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 2

struct tipo_alunos
{
    char nome[50];
    float notaTotal;
    int faltas;
};

typedef struct tipo_alunos tipo_alunos;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i;

    tipo_alunos alunos[TAM];

    for (i = 0; i < TAM; i++) {
        printf("Insira o nome do aluno(a) %d: \n", i+1);
        scanf("%50[^\n]s", alunos[i].nome);
        printf("Insira a nota total do(a) %s: \n", alunos[i].nome);
        scanf("%f", &alunos[i].notaTotal);
        printf("Quantas faltas tem %s: \n", alunos[i].nome);
        scanf("%d", &alunos[i].faltas);
        fflush(stdin);
    }

    system("cls");

    for (i = 0; i < TAM; i++) {
        if (alunos[i].faltas >= 250 || alunos[i].notaTotal < 24) {
            printf("O aluno %s, esta reprovado! \n", alunos[i].nome);
        } else {
            printf("O aluno %s, esta aprovado! \n", alunos[i].nome);
        }
    }

}

#include <stdio.h>

int main() {
    char nome[50];
    int idade, matricula;
        float altura;

    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    printf("Aluno cadastrado: %sIdade: %d\n", nome, idade);

    return 0;
}
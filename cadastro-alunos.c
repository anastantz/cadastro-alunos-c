//Exercício de entrada e saída de dados com cadastro simples de alunos
#include <stdio.h>

int main() {

    char nome[50];
    int idade, matricula;
    float altura;

    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    printf("Digite a altura do aluno (em metros): ");
    scanf("%f", &altura);

    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);

    //Sequência de printfs exercitando especificadores
    printf("\n--- Cadastro do Aluno ---\n");
    printf("Nome: %s", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Matricula: %d\n", matricula);

    return 0;
}
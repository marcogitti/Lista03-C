//Exercício com Laço de Repetição While

#include <stdio.h>

int main() {
  int codigo_aluno, contador = 0;
  float nota1, nota2, nota3, media, soma = 0.0;

  while (1) {
    printf("Digite o código do aluno (ou 0 para sair): ");
    scanf("%d", &codigo_aluno);

    if (codigo_aluno == 0) {
      break;
    }

    printf("Digite a primeira nota do aluno %d: ", codigo_aluno);
    scanf("%f", &nota1);

    printf("Digite a segunda nota do aluno %d: ", codigo_aluno);
    scanf("%f", &nota2);

    printf("Digite a terceira nota do aluno %d: ", codigo_aluno);
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("A média do aluno %d é %.2f\n", codigo_aluno, media);

    contador++;
    soma += media;
  }

  if (contador > 0) {
    printf("A média aritmética da turma é %.2f\n", soma / contador);
  } else {
    printf("Não foram digitadas notas de alunos.\n");
  }

  return 0;
}
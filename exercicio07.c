#include <stdio.h>

int main() {
  int num_filhos, total_filhos = 0, num_pessoas = 0, num_pessoas_ate_100 = 0;
  float salario, total_salario = 0, media_salario, media_filhos, maior_salario = 0;
  
  while (1) {
    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario < 0) {
      break;
    }

    printf("Digite o numero de filhos: ");
    scanf("%d", &num_filhos);

    total_salario += salario;
    total_filhos += num_filhos;
    num_pessoas++;

    if (salario > maior_salario) {
      maior_salario = salario;
    }

    if (salario <= 100) {
      num_pessoas_ate_100++;
    }
  }

  if (num_pessoas == 0) {
    printf("Aviso! Nao ha nenhum habitante registrado ate o presente momento!\n");
    return 0;
  }

  media_salario = total_salario / num_pessoas;
  media_filhos = (float) total_filhos / num_pessoas;
  float percentual_ate_100 = (float) num_pessoas_ate_100 / num_pessoas * 100;

  printf("Media do salario da populacao: R$%.2f\n", media_salario);
  printf("Media do numero de filhos: %.2f\n", media_filhos);
  printf("Maior salario: R$%.2f\n", maior_salario);
  printf("Percentual de pessoas com salario ate R$100,00: %.2f%%\n", percentual_ate_100);

  return 0;
}
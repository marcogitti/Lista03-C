#include <stdio.h>

int main() {
  int num, contador = 0;
  float media, soma = 0.0;

  while (1) {
    printf("Digite um número inteiro (ou 0 para sair): ");
    scanf("%d", &num);

    if (num == 0) {
      break;
    }

    if (num % 2 == 0) {
      soma += num;
      contador++;
    }
  }

  if (contador > 0) {
    media = soma / contador;
    printf("A média dos números pares digitados é %.2f\n", media);
  } else {
    printf("Não foram digitados números pares.\n");
  }

  return 0;
}
#include <stdio.h>

int main() {
  int num, contador1 = 0, contador2 = 0, contador3 = 0, contador4 = 0;

  do {
    printf("Digite um número inteiro (ou um número negativo para sair): ");
    scanf("%d", &num);

    if (num >= 0 && num <= 25) {
      contador1++;
    } else if (num >= 26 && num <= 50) {
      contador2++;
    } else if (num >= 51 && num <= 75) {
      contador3++;
    } else if (num >= 76 && num <= 100) {
      contador4++;
    }
  } while (num >= 0);

  printf("Foram digitados %d números no intervalo [0,25]\n", contador1);
  printf("Foram digitados %d números no intervalo [26,50]\n", contador2);
  printf("Foram digitados %d números no intervalo [51,75]\n", contador3);
  printf("Foram digitados %d números no intervalo [76,100]\n", contador4);

  return 0;
}
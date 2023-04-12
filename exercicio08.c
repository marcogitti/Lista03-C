#include <stdio.h>

int main() {
  int num, soma = 0, count = 0;
  float media;

  for (num = 13; num <= 73; num++) {
    soma += num;
    count++;
  }

  media = (float) soma / count;
  printf("Media aritmetica dos numeros entre 13 e 73: %.2f\n", media);

  return 0;
}
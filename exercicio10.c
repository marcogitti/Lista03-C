#include <stdio.h>

int main() {
  int num, dentroIntervalo = 0, foraIntervalo = 0, i;

  for (i = 1; i <= 10; i++) {
    printf("Digite o %d° valor: ", i);
    scanf("%d", &num);

    if (num >= 10 && num <= 20) {
      dentroIntervalo++;
    } else {
      foraIntervalo++;
    }
  }

  printf("\n%d valores dentro do intervalo [10,20]\n", dentroIntervalo);
  printf("%d valores fora do intervalo [10,20]\n", foraIntervalo);

  return 0;
}
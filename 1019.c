#include <stdio.h>
  
int main() {
  
    int x, horas, minutos, segundos;
    scanf("%d", &x);
    horas = x / 60 / 60;
    x = x - horas * 60 * 60;
    minutos = x / 60;
    x = x - minutos * 60;
    segundos = x/1;
    x = x - x/1;
    printf("%d:%d:%d\n", horas, minutos, segundos);
  
    return 0;
}
#include <stdio.h>
  
int main() {
  
    int horas, vel;
    double dist, litros;
    scanf("%d", &horas);
    scanf("%d", &vel);
    dist = horas*vel;
    litros = dist/12;
    printf("%.3lf\n", litros);
  
    return 0;
}
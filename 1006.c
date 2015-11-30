#include <stdio.h>
  
int main() {
  
    double A, B, C, peso1, peso2, peso3, MEDIA;
    scanf("%lf %lf %lf", &A, &B, &C);
    peso1 = 2;
    peso2 = 3;
    peso3 = 5;
    MEDIA = (A*peso1 + B*peso2 + C*peso3)/10;
    printf("MEDIA = %.1lf\n", MEDIA);
  
    return 0;
}
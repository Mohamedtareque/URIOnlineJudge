#include <stdio.h>
  
int main() {
  
    double A, B, MEDIA, peso1, peso2;
    peso1 = 3.5;
    peso2 = 7.5;
    scanf("%lf %lf", &A, &B);
    MEDIA = (A*peso1 + B*peso2)/11;
    printf("MEDIA = %.5lf\n", MEDIA);
  
    return 0;
}
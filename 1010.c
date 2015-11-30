#include <stdio.h>
  
int main() {
  
    int cod1, cod2, num1, num2;
    double vlr1, vlr2, total;
    scanf("%d %d %lf", &cod1, &num1, &vlr1);
    scanf("%d %d %lf", &cod2, &num2, &vlr2);
    total = num1 * vlr1 + num2 * vlr2;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
  
    return 0;
}
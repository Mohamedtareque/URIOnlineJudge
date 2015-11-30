#include <stdio.h>
  
int main() {
  
    char nome[100];
    double sal, vendas, total;
    scanf("%s %lf %lf", nome, &sal, &vendas);
    total = (vendas * 0.15) + sal;
    printf("TOTAL = R$ %.2lf\n", total);
  
    return 0;
}
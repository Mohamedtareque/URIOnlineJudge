#include <stdio.h>
  
int main() {
  
    int num, horas;
    double vlr, sal;
    scanf("%d %d %lf", &num, &horas, &vlr);
    sal = horas * vlr;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", sal);
  
    return 0;
}
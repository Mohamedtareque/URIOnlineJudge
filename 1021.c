#include <stdio.h>
double value;
int hundred, fifty, twenty, ten, five, two, x = 1;
double one, cFifty, cTwentyFive, cTen, cFive, cOne;
 
void printValues(){
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", hundred);
    printf("%d nota(s) de R$ 50.00\n", fifty);
    printf("%d nota(s) de R$ 20.00\n", twenty);
    printf("%d nota(s) de R$ 10.00\n", ten);
    printf("%d nota(s) de R$ 5.00\n", five);
    printf("%d nota(s) de R$ 2.00\n", two);
    printf("MOEDAS:\n");
    printf("%.0lf moeda(s) de R$ 1.00\n", one);
    printf("%.0lf moeda(s) de R$ 0.50\n", cFifty);
    printf("%.0lf moeda(s) de R$ 0.25\n", cTwentyFive);
    printf("%.0lf moeda(s) de R$ 0.10\n", cTen);
    printf("%.0lf moeda(s) de R$ 0.05\n", cFive);
    printf("%.0lf moeda(s) de R$ 0.01\n", cOne);
}
 
int main() {
    scanf("%lf", &value);
    hundred = value / 100;
    value -= hundred * 100;
    fifty = value / 50;
    value -= fifty * 50;
    twenty = value / 20;
    value -= twenty * 20;
    ten = value / 10;
    value -= ten * 10;
    five = value / 5;
    value -= five * 5;
    two = value / 2;
    value -= two * 2;
    while(value >= 1){
        value -= 1;
        one++;
    }
    while(value >= 0.50){
        value -= 0.50;
        cFifty++;
    }
    while(value >= 0.25){
        value -= 0.25;
        cTwentyFive++;
    }
    while(value >= 0.10){
        value -= 0.10;
        cTen++;
    }
    while(value >= 0.05) {
        value -= 0.05;
        cFive++;
    }
    while(value >= 0.01){
        value -= 0.01;
        cOne++;
    }
    printValues();
    return 0;
}
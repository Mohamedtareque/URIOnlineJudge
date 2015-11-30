#include <stdio.h>
  
int main() {
  
    int x, a, b, c, d, e, f, g;
    scanf("%d", &x);
    printf("%d\n", x);
    a = x/100;
    x = x - a*100;
    b = x/50;
    x = x - b*50;
    c = x/20;
    x = x - c*20;
    d = x/10;
    x = x - d*10;
    e = x/5;
    x = x - e*5;
    f = x/2;
    x = x - f*2;
    g = x/1;
    printf("%d nota(s) de R$ 100,00\n", a);
    printf("%d nota(s) de R$ 50,00\n", b);
    printf("%d nota(s) de R$ 20,00\n", c);
    printf("%d nota(s) de R$ 10,00\n", d);
    printf("%d nota(s) de R$ 5,00\n", e);
    printf("%d nota(s) de R$ 2,00\n", f);
    printf("%d nota(s) de R$ 1,00\n", g);
  
    return 0;
}
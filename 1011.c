#include <stdio.h>
  
int main() {
  
    int r;
    double pi = 3.14159, volume;
    scanf("%d", &r);
    volume = (4/3.0) * pi * r * r * r;
    printf("VOLUME = %.3lf\n", volume);
  
    return 0;
}
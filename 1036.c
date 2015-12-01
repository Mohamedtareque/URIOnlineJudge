#include <stdio.h>
#include <math.h>

int main(){

	double a, b, c, delta, r1, r2;
	scanf("%lf %lf %lf", &a, &b, &c);

	delta = b*b - 4 * a * c;
	delta = sqrt(delta);

	r1 = (-b + delta) / (2*a);
	r2 = (-b - delta) / (2*a);

	if(delta >= 0 && a != 0){
		printf("R1 = %.5lf", r1);
		printf("\n");
		printf("R2 = %.5lf", r2);
		printf("\n");
	}
	else {
		printf("Impossivel calcular");
		printf("\n");
	}


	return 0;
}
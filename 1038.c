#include <stdio.h>

int main(){

	int cod, qtd;
	float price;
	scanf("%d %d", &cod, &qtd);

	switch(cod){
		case 1:
			price = 4;
			printf("Total: R$ %.2f\n", price * qtd);
			break;
		case 2:
			price = 4.50;
			printf("Total: R$ %.2f\n", price * qtd);
			break;
		case 3:
			price = 5;
			printf("Total: R$ %.2f\n", price * qtd);
			break;
		case 4:
			price = 2;
			printf("Total: R$ %.2f\n", price * qtd);
			break;
		case 5:
			price = 1.50;
			printf("Total: R$ %.2f\n", price * qtd);
			break;
	}

	return 0;
}
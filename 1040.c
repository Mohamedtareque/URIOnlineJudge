#include <stdio.h>

int main(){

	float n1, n2, n3, n4, average, exam;
	int w1 = 2, w2 = 3, w3 = 4, w4 = 1;

	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

	average = ((n1 * w1) + (n2 * w2) + (n3 * w3) + (n4 * w4))/10;
	printf("Media: %.1f\n", average);

	if(average >= 7) printf("Aluno aprovado.\n");
	else if(average < 5) printf("Aluno reprovado.\n");
	else{
		printf("Aluno em exame.\n");
		scanf("%f", &exam);
		printf("Nota do exame: %.1f\n", exam);
		average = (average + exam)/2;
		if(average >= 5) printf("Aluno aprovado.\n");
		else printf("Aluno reprovado.\n");
		printf("Media final: %.1f\n", average);

	}
	

	return 0;
}
//(average >= 5 && average <= 6.9)
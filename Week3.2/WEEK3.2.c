#include<stdio.h>
#include<math.h>

int main() {
	float popA, popB;
	float grA, grB;
	int year = 0;
	int i = 0;
	printf("Population of A = ");
	scanf_s("%f", &popA);
	printf("Growth rate (%%) = ");
	scanf_s("%f", &grA);
	printf("Population of B = ");
	scanf_s("%f", &popB);
	printf("Growth rate (%%) = ");
	scanf_s("%f", &grB);
	while (1) {
		printf("year %d, A = %.2f , B = %.2f\n", year, popA * pow(1 + grA/100, i), popB * pow(1 + grB/100, i));
		if (popA * pow(1 + grA/100, i) > popB * pow(1 + grB/100, i)) break;
		i = i + 1;
		year = year + 1;
	}
	printf("Duration =   %d years", year);
	return 0;
}
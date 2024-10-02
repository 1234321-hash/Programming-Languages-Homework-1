#include <stdio.h>

int main() {
	int number1, number2;

	printf("块材计");
	scanf_s("%d", &number1);

	printf("块材计");
	scanf_s("%d", &number2);

	if (number1 % number2 == 0) {
		printf("%d琌%d计\n", number1, number2);
	}
	else {
		printf("%dぃ琌%d计\n", number1, number2);
	}
	return 0;
}
#include <stdio.h>

int main() {
	int number1, number2;

	printf("輸入第一個數");
	scanf_s("%d", &number1);

	printf("輸入第二個數");
	scanf_s("%d", &number2);

	if (number1 % number2 == 0) {
		printf("%d是%d的倍數\n", number1, number2);
	}
	else {
		printf("%d不是%d的倍數\n", number1, number2);
	}
	return 0;
}
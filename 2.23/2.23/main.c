#include <stdio.h>

int main() {
	int num1, num2, num3;
	printf("輸入三個數:");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	int max = num1 ;
	if (num2 > max) {
		max = num2;
	}
	if (num3 > max) {
		max = num3;
	}
	int min = num1 ;
	if (num2 < min) {
		min = num2;
	}
	if (num3 < min) {
		min = num3;
	}

	printf("最大值: %d\n", max);
	printf("最小值: %d\n", min);

	return 0;
}
#include <stdio.h>

int main() {
	int number1, number2;

	printf("��J�Ĥ@�Ӽ�");
	scanf_s("%d", &number1);

	printf("��J�ĤG�Ӽ�");
	scanf_s("%d", &number2);

	if (number1 % number2 == 0) {
		printf("%d�O%d������\n", number1, number2);
	}
	else {
		printf("%d���O%d������\n", number1, number2);
	}
	return 0;
}
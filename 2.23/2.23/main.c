#include <stdio.h>

int main() {
	int num1, num2, num3;
	printf("��J�T�Ӽ�:");
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

	printf("�̤j��: %d\n", max);
	printf("�̤p��: %d\n", min);

	return 0;
}
# include <stdio.h>

int main() {

	int number;
	printf("��J�@�Ӽ�");
	scanf_s("%d", &number);


	if (number % 2 == 0) {
		printf("%d�O����", number);
	}
	else {
		printf("%d�O�_��", number);
	}

	return 0;
}
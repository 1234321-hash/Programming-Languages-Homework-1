# include <stdio.h>

int main() {

	int number;
	printf("輸入一個數");
	scanf_s("%d", &number);


	if (number % 2 == 0) {
		printf("%d是偶數", number);
	}
	else {
		printf("%d是奇數", number);
	}

	return 0;
}
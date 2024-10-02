# include <stdio.h>

int main() {

	int number;
	printf("块计");
	scanf_s("%d", &number);


	if (number % 2 == 0) {
		printf("%d琌案计", number);
	}
	else {
		printf("%d琌计", number);
	}

	return 0;
}
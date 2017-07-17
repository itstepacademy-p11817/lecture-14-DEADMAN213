#include <conio.h>
#include <stdio.h>
#include "Z03.h"

int main() {
	int num1 = 0;
	int num2 = 0;

	printf("Input integer 1: ");
	scanf_s("%d", &num1);
	printf("Input integer 2: ");
	scanf_s("%d", &num2);

	int less = num2 < num1 ? num2 : num1;
	
	for (int i = 1; i <= less/2; i++) {
		if (isNumber(num1, num2, i)) {
			printf("%d\n", i);
		}
	}
	if (isNumber(num1, num2, less)) {
		printf("%d\n", less);
	}

	_getch();
	return 0;
}
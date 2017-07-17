#include <conio.h>
#include <stdio.h>
#include "Z02.h"

int main() {
	int num = 0;
	printf("Input integer: ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num/2; i++) {
		if (isNumber(num, i)) {
			printf("%d\n", i);
		}
	}
	printf("%d\n", num);

	_getch();
	return 0;
}
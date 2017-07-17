#include <conio.h>
#include <stdio.h>
#include <math.h>
#include "Z04.h"

int main() {
	int num = 0;
	printf("Input integer: ");
	scanf_s("%d", &num);

	for (int i = 1; i <= (int)sqrt(num); i++) {
		if (isNumber(num, i)) {
			printf("%d\n", i);
		}
	}

	_getch();
	return 0;
}
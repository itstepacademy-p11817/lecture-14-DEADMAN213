#include <stdbool.h>
#include "Z03.h"

bool isNumber(int dividend1, int dividend2, int divider) {
	if (dividend1%divider == 0 && dividend2%divider == 0) {
		return true;
	}

	return false;
}
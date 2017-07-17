#include <stdbool.h>
#include "Z02.h"

bool isNumber(int dividend, int divider) {
	if (dividend%divider == 0) {
		return true;
	}

	return false;
}
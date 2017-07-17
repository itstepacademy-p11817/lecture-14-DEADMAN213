#include <stdbool.h>
#include "Z04.h"

bool isNumber(int dividend, int divider) {
	if (dividend % (divider*divider) == 0 && dividend % (divider*divider*divider) != 0) {
		return true;
	}

	return false;
}
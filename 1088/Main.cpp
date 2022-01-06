
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

	int one;
	scanf("%d", &one);

	if (one >= 1 && one <= 100) {
		for (int i = 1; i <= one; i++) {
			if (i % 3 == 0)
				continue;
			printf("%d ", i);
		}
	}

	return 0;
}
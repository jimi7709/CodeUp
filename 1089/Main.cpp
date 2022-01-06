
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

	int a, d, n;
	int output = 0;
	scanf("%d %d %d", &a, &d, &n);
	if (a >= 0 && d >= 0 && n >= 0 && a <= 100 && d <= 100 && n <= 100) {
		output = a + (n - 1) * d;
	}
	printf("%d", output);

	return 0;
}
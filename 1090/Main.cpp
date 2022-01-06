#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
int main(void) {

	int a, r, n;
	long long int out = 0;
	scanf("%d %d %d", &a,&r,&n);
	if (a >= 0 && r >= 0 && n >= 0 && a <= 10 && r <= 10 && n <= 10) {
		long long int temp = 1;
		for (int i = 1; i < n; i++) {
			temp *= r;
		}
		out = a * temp;
	}
	printf("%lld", out);

	return 0;
}
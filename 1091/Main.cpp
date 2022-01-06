#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

	int a, m, d, n;
	long long int out = 0;
	scanf("%d %d %d %d", &a, &m, &d, &n);
	if(a>=-50&& m >= -50 && d >= -50 &&a<=50&& m <= 50 && d <= 50 &&n<=10){
		long long int temp = a;
		for (int i = 1; i < n; i++) {
			temp = temp * m;
			temp += d;
		}
		out = temp;
	}

	printf("%lld", out);

	return 0;
}
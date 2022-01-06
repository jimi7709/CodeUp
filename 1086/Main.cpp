#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

	int w, h, b;
	double output;
	scanf("%d %d %d", &w, &h, &b);

	if (w >= 1 && h >= 1 && w <= 1024 && h <= 1024&&b%4==0) {

		output = ((double)(w * h * b)) / (8*1024*1024);
	}
	printf("%.2f MB", output);
	return 0;
}
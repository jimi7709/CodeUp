#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//문제를 끝까지 안 읽고 문제를 풀어서, 문제 푸는데 5분이 더 소요돼었다.

int main(void) {

	int one;
	int sum = 0;
	int i = 0;
	scanf("%d", &one);
	while (1) {
		if (one >= 0 && one <= 1000) {
		i++;
		sum += i;
		if (sum >= one) {
			printf("%d", i);
			break;
			}
		}
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//������ ������ �� �а� ������ Ǯ�, ���� Ǫ�µ� 5���� �� �ҿ�ž���.

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
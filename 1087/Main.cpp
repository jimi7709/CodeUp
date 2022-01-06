
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int one;
	
	scanf("%d", &one);
	if (one <= 1000000000) {
		int total = 0;
		int i = 0;
		while (1) {
			i++;
			total += i;
			if (total >= one) {
				printf("%d", total);
				break;
			}

		}
	}
	return 0;
}
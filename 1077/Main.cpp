#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//5분 안에 품.
int main(void) {

	int num;
	scanf("%d", &num);
	if (num >= 0 && num <= 100) {

		for (int i = 0; i <= num; i++) {
			printf("%d\n", i);
		}

	}


	return 0;
}
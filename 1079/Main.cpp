#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1079 문제의 출력 예시에 오류가 있음.

int main(void) {

	while (1) {
		char one;
		scanf("%c", &one);
		if (one=='q') {
			printf("%c",one);
			break;
		}
		printf("%c",one);
	}

	return 0;
}
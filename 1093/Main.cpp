#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

	int ary[23] = {0,};
	int n; 

	scanf("%d", &n);
	if (n >= 1 && n <= 10000) {
		int temp;
		for (int i = 0; i < n; i++) {
			scanf("%d", &temp);
			ary[temp-1] = ary[temp-1] + 1;
		}

		for (int i = 0; i < 23; i++) {
			printf("%d ",ary[i]);
		}
	}
	return 0;
}
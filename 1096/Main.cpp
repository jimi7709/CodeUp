#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int n, x, y;
	int ary[19][19] = { 0, };

	scanf("%d", &n);

	if (n >= 1 && n <= 10) {
		for (int i = 1; i <= n; i++) {
			scanf("%d %d", &x, &y);
			if (x >= 1 && y >= 1 && x <= 19 && y <= 19) {
				ary[x-1][y-1] = 1;
			}
		}
	}
	for (int i = 0; i <= 18; i++) {
		for (int j = 0; j <= 18; j++) {
			printf("%d ", ary[i][j]);
		}
		printf("\n");
	}
	return 0;
}
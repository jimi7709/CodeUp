#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int n;
	int x, y;
	int ary[19][19] = { 0, };
	for (int i = 0; i <= 18; i++) {
		for (int j = 0; j <= 18; j++) {
			scanf("%d", &ary[i][j]);
		}
	}
	scanf("%d", &n);
	if (n >= 1 && n <= 10) {
		for (int k = 1; k <= n; k++) {
			scanf("%d %d", &x, &y);
			x--;
			y--;
			for (int i = 0; i <= 18; i++) {
				if (ary[x][i] == 0)
					ary[x][i] = 1;
				else
					ary[x][i] = 0;
			}
			for (int j = 0; j <= 18; j++) {
				if (ary[j][y] == 0)
					ary[j][y] = 1;
				else
					ary[j][y] = 0;
			}
		}
	}
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			printf("%d ", ary[i][j]);
		}
		printf("\n");
	}

	return 0;
}
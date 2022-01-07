#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//약 1098번 문제 푸는데, 약 1시간 걸렸다.
int main(void) {
	int ary[100][100] = { 0, };
	int h, w;//세로 가로
	int n;
	int l, d, x, y;
	scanf("%d %d", &h, &w);//격자판 크기
	if (h >= 1 && w >= 1 && h <= 100 && h <= 100) {
		scanf("%d", &n);
		if (n >= 1 && n <= 10) {
			for (int i = 1; i <= n; i++) {//n번 반복.
				scanf("%d %d %d %d", &l, &d, &x, &y);

				if ( x >= 1 && y >= 1 && x <= 100 - h && y <= 100 - w) {
					if (d == 0) {
						for (int i = 0; i < l; i++)
							ary[x-1][y-1+i] = 1;
					}
					else{
						for (int i = 0; i < l; i++)
							ary[x-1+i][y-1] = 1;
					}
				}
			}

		}
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j< w; j++) {
			printf("%d ", ary[i][j]);
		}
		printf("\n");
	}

	return 0;
}
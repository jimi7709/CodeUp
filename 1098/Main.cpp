#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�� 1098�� ���� Ǫ�µ�, �� 1�ð� �ɷȴ�.
int main(void) {
	int ary[100][100] = { 0, };
	int h, w;//���� ����
	int n;
	int l, d, x, y;
	scanf("%d %d", &h, &w);//������ ũ��
	if (h >= 1 && w >= 1 && h <= 100 && h <= 100) {
		scanf("%d", &n);
		if (n >= 1 && n <= 10) {
			for (int i = 1; i <= n; i++) {//n�� �ݺ�.
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
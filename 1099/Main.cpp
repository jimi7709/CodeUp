#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� Ǯ�� ����.
int main(void) {

	//�Է�
	int ary[10][10] = { 0, };
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			int temp;
			scanf("%d", &temp);
			ary[i][j] = temp;
		}
	}

	//�˰���
	int x=1, y=1;
	int clue = 9; // ������ �̵� ���

	while (ary[x][y] != 2) {//���̸� ã�� ������ �ݺ�
		if (x == 8 && y == 8)
			break;
		if (ary[x][y] == 1)
			x--;
		for (; y <10; y++) {
			if (ary[x][y] == 2) {//���� ã���� for�� Ż��
				break;
			}
			else if (ary[x][y] == 1) {
				break;
			}
			else if (ary[x][y] == 1&&ary[x+1][y-1]==1) {
				y-=2;
				break;
			}
			else {
				ary[x][y] = clue;
			}
		}
		if (ary[x][y] == 1)//���������δ� �� �̻� �����ϱ�, �� ĭ ������
			y--;
		if (ary[x][y] == 2)
			break;
		for (; x <10; x++) {
			if (ary[x][y] == 2) {//���� ã���� for�� Ż��
				break;
			}
			else if (ary[x][y] == 1) {
				break;
			}
			else if (ary[x][y] == 1 && ary[x-1][y+1] == 1) {
				x-=2;
				break;
			}
			else if (ary[x][y + 1] == 0)//���������� �� �� �ִ��� Ȯ��.
			{
				ary[x][y] = clue;//�� �� ������ ���� ��ġ �̵����� ǥ�� ��,
				break;//for�� Ż���ؼ� �ٽ� ���������� �� �� �ֵ��� ��.
			}
			else {
				ary[x][y] = clue;
			}
		}
		if (ary[x][y] == 2)
			break;
	}
	ary[x][y] = clue;//���̸� ã�Ҵ� �κп��� ����ǹǷ� �� ���� �̵�����̴�.

	//���
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", ary[i][j]);
		}
		printf("\n");
	}
	return 0;
}
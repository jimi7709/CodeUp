#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1�� �õ� 1�ð� 46�� ��ǰ.
//2�� �õ� 1�ð� 18�� ���� ǰ.
//���� Ǯ�� ����.
int main(void) {

	int road[10][10] = {};//�̷�
	int temp;//�̷� ������ ���� �Է¹޴� ����
	int food = 0;//����
	for (int i = 0; i < 10; i++) {//�̷� �� ����
		for (int j = 0; j < 10; j++) {
			scanf("%d", &temp);
			if (temp >= 0 && temp <= 9) {
				road[i][j] = temp;
			}
		}
	}
//	printf("\n\n");
	int x, y;//�ݺ����� i�� j�� ����ϴµ� �־ �̼��� �Ǵ� ���ʱ�ȭ ������ �ذ��ϱ� ���ؼ� ������.
	while (food != 2) {
		int i = 1;
		int j=1;
		for ( ; i < 9; i++) {
			x = i;

			for (; j < 9; j++) {
				
				y = j;
				//�Ʒ� �ڵ� 3���� �����ٰ� �ϰ� �������� �ٷ� ���̶�� �ϸ�, �Ʒ� �ڵ带 �����Ű�� ���� �ش��ϴ� road[i][j]�� 2�� �Ǹ鼭 for�� Ż�� �Ұ�.
				//if (i == 1 && j == 1) {
				//	road[i][j] = 9;
				//}
				if (road[i][j] == 2) {
					food = 2;
					break;
				}
				if (road[i][j] != 1) {
					road[i][j] = 9;
				}
				if (road[i][j + 1] == 1) {
					//j++;
					//y = j;
					break;
				}
				else if (road[i][j + 1] != 1) {
					road[i][j] = 9;
				}
			}
			
			if (road[x][y] == 2) {
				road[x][y] = 9;
				food = 2;
				break;
			}
			if (road[x][y] != 1) {
				road[x][y] = 9;
			}
			if (road[x][y]!=1 &&road[x][y + 1] == 1 && road[x+1][y] == 1) {//������ �� ���� ��
				road[x][y] = 9;
				food = 2; //���̸� ã�� ���� �̹� ������ �� �����Ƿ� while������ Ż�� ���ؼ�
				break;
			}
			else if (road[x][y] == 1 && road[x][y + 1] == 1 && road[x+1][y] == 1) {//������ �� ���� ��
				food = 2;//���̸� ã�� ���� �̹� ������ �� �����Ƿ� while������ Ż�� ���ؼ�
				break;
			}
		}


		if (road[x][y] == 2) {
			road[x][y] = 9;
		}
	}

	for (int i = 0; i < 10; i++) {//�̷� �� ���.
		for (int j = 0; j < 10; j++) {
				printf("%d ",road[i][j]);
		}
		printf("\n");
	}


	return 0;
}
//���� �ڵ�
	////�Է�
	//int ary[10][10] = { 0, };
	//for (int i = 0; i < 10; i++) {
	//	for (int j = 0; j < 10; j++) {
	//		int temp;
	//		scanf("%d", &temp);
	//		ary[i][j] = temp;
	//	}
	//}

	////�˰���
	//int x=1, y=1;
	//int clue = 9; // ������ �̵� ���

	//while (ary[x][y] != 2) {//���̸� ã�� ������ �ݺ�
	//	if (x == 8 && y == 8)
	//		break;
	//	if (ary[x][y] == 1)
	//		x--;
	//	for (; y <10; y++) {
	//		if (ary[x][y] == 2) {//���� ã���� for�� Ż��
	//			break;
	//		}
	//		else if (ary[x][y] == 1) {
	//			break;
	//		}
	//		else if (ary[x][y] == 1&&ary[x+1][y-1]==1) {
	//			y-=2;
	//			break;
	//		}
	//		else {
	//			ary[x][y] = clue;
	//		}
	//	}
	//	if (ary[x][y] == 1)//���������δ� �� �̻� �����ϱ�, �� ĭ ������
	//		y--;
	//	if (ary[x][y] == 2)
	//		break;
	//	for (; x <10; x++) {
	//		if (ary[x][y] == 2) {//���� ã���� for�� Ż��
	//			break;
	//		}
	//		else if (ary[x][y] == 1) {
	//			break;
	//		}
	//		else if (ary[x][y] == 1 && ary[x-1][y+1] == 1) {
	//			x-=2;
	//			break;
	//		}
	//		else if (ary[x][y + 1] == 0)//���������� �� �� �ִ��� Ȯ��.
	//		{
	//			ary[x][y] = clue;//�� �� ������ ���� ��ġ �̵����� ǥ�� ��,
	//			break;//for�� Ż���ؼ� �ٽ� ���������� �� �� �ֵ��� ��.
	//		}
	//		else {
	//			ary[x][y] = clue;
	//		}
	//	}
	//	if (ary[x][y] == 2)
	//		break;
	//}
	//ary[x][y] = clue;//���̸� ã�Ҵ� �κп��� ����ǹǷ� �� ���� �̵�����̴�.

	////���
	//for (int i = 0; i < 10; i++) {
	//	for (int j = 0; j < 10; j++) {
	//		printf("%d ", ary[i][j]);
	//	}
	//	printf("\n");
	//}
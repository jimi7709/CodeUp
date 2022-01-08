#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//아직 풀지 못함.
int main(void) {

	//입력
	int ary[10][10] = { 0, };
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			int temp;
			scanf("%d", &temp);
			ary[i][j] = temp;
		}
	}

	//알고리즘
	int x=1, y=1;
	int clue = 9; // 개미의 이동 경로

	while (ary[x][y] != 2) {//먹이를 찾을 때까지 반복
		if (x == 8 && y == 8)
			break;
		if (ary[x][y] == 1)
			x--;
		for (; y <10; y++) {
			if (ary[x][y] == 2) {//먹이 찾으면 for문 탈출
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
		if (ary[x][y] == 1)//오른쪽으로는 더 이상 못가니까, 한 칸 물러남
			y--;
		if (ary[x][y] == 2)
			break;
		for (; x <10; x++) {
			if (ary[x][y] == 2) {//먹이 찾으면 for문 탈출
				break;
			}
			else if (ary[x][y] == 1) {
				break;
			}
			else if (ary[x][y] == 1 && ary[x-1][y+1] == 1) {
				x-=2;
				break;
			}
			else if (ary[x][y + 1] == 0)//오른쪽으로 갈 수 있는지 확인.
			{
				ary[x][y] = clue;//갈 수 있으면 현재 위치 이동했음 표시 후,
				break;//for문 탈출해서 다시 오른쪽으로 갈 수 있도록 함.
			}
			else {
				ary[x][y] = clue;
			}
		}
		if (ary[x][y] == 2)
			break;
	}
	ary[x][y] = clue;//먹이를 찾았는 부분에서 종료되므로 이 또한 이동경로이다.

	//출력
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", ary[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1차 시도 1시간 46분 못품.
//2차 시도 1시간 18분 만에 품.
//아직 풀지 못함.
int main(void) {

	int road[10][10] = {};//미로
	int temp;//미로 각각의 값을 입력받는 변수
	int food = 0;//먹이
	for (int i = 0; i < 10; i++) {//미로 값 설정
		for (int j = 0; j < 10; j++) {
			scanf("%d", &temp);
			if (temp >= 0 && temp <= 9) {
				road[i][j] = temp;
			}
		}
	}
//	printf("\n\n");
	int x, y;//반복변수 i와 j를 사용하는데 있어서 미선언 또는 미초기화 문제를 해결하기 위해서 선언함.
	while (food != 2) {
		int i = 1;
		int j=1;
		for ( ; i < 9; i++) {
			x = i;

			for (; j < 9; j++) {
				
				y = j;
				//아래 코드 3줄을 돌린다고 하고 개미집이 바로 먹이라고 하면, 아래 코드를 실행시키는 순간 해당하는 road[i][j]는 2가 되면서 for문 탈출 불가.
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
			if (road[x][y]!=1 &&road[x][y + 1] == 1 && road[x+1][y] == 1) {//움직일 수 없을 때
				road[x][y] = 9;
				food = 2; //먹이를 찾기 전에 이미 움직일 수 없으므로 while문에서 탈출 위해서
				break;
			}
			else if (road[x][y] == 1 && road[x][y + 1] == 1 && road[x+1][y] == 1) {//움직일 수 없을 때
				food = 2;//먹이를 찾기 전에 이미 움직일 수 없으므로 while문에서 탈출 위해서
				break;
			}
		}


		if (road[x][y] == 2) {
			road[x][y] = 9;
		}
	}

	for (int i = 0; i < 10; i++) {//미로 값 출력.
		for (int j = 0; j < 10; j++) {
				printf("%d ",road[i][j]);
		}
		printf("\n");
	}


	return 0;
}
//오답 코드
	////입력
	//int ary[10][10] = { 0, };
	//for (int i = 0; i < 10; i++) {
	//	for (int j = 0; j < 10; j++) {
	//		int temp;
	//		scanf("%d", &temp);
	//		ary[i][j] = temp;
	//	}
	//}

	////알고리즘
	//int x=1, y=1;
	//int clue = 9; // 개미의 이동 경로

	//while (ary[x][y] != 2) {//먹이를 찾을 때까지 반복
	//	if (x == 8 && y == 8)
	//		break;
	//	if (ary[x][y] == 1)
	//		x--;
	//	for (; y <10; y++) {
	//		if (ary[x][y] == 2) {//먹이 찾으면 for문 탈출
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
	//	if (ary[x][y] == 1)//오른쪽으로는 더 이상 못가니까, 한 칸 물러남
	//		y--;
	//	if (ary[x][y] == 2)
	//		break;
	//	for (; x <10; x++) {
	//		if (ary[x][y] == 2) {//먹이 찾으면 for문 탈출
	//			break;
	//		}
	//		else if (ary[x][y] == 1) {
	//			break;
	//		}
	//		else if (ary[x][y] == 1 && ary[x-1][y+1] == 1) {
	//			x-=2;
	//			break;
	//		}
	//		else if (ary[x][y + 1] == 0)//오른쪽으로 갈 수 있는지 확인.
	//		{
	//			ary[x][y] = clue;//갈 수 있으면 현재 위치 이동했음 표시 후,
	//			break;//for문 탈출해서 다시 오른쪽으로 갈 수 있도록 함.
	//		}
	//		else {
	//			ary[x][y] = clue;
	//		}
	//	}
	//	if (ary[x][y] == 2)
	//		break;
	//}
	//ary[x][y] = clue;//먹이를 찾았는 부분에서 종료되므로 이 또한 이동경로이다.

	////출력
	//for (int i = 0; i < 10; i++) {
	//	for (int j = 0; j < 10; j++) {
	//		printf("%d ", ary[i][j]);
	//	}
	//	printf("\n");
	//}
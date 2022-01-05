#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//짝수의 합 조건이 있다는 것을 생각하자.

int main(void) {
	int num;
	int sum = 0;
	scanf("%d", &num);

	if (num >= 1 && num <= 100) {
		for(int i=1; i<=num; i++)
			if(i%2==0)
				sum += i;
	}
	printf("%d", sum);
	return 0;
}
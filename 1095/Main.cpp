#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main(void) {

	int ary[10000] = { 0, };
	int n;
	int  min;
	scanf("%d", &n);
	if (n >= 1 && n <= 10000) {
		int ai;
		
		for (int i = 0; i < n; i++) {
			scanf("%d", &ai);
			
			if (ai >= 1 && ai <= 23) {
				ary[i] = ai;
				
			}
		}
	}
	min = ary[0];
	for (int i = 0; i < n; i++) {
		if (min > ary[i]) {
			min = ary[i];
		}
	}
	printf("%d", min);
	return 0;
}
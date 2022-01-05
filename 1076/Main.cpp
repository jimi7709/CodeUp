#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	char Input;
	scanf("%c", &Input);
	for (char i = 97; i <= Input; i++) {
		printf("%c ", i);
	}
	//do {
		
	//} while ();

	return 0;
}
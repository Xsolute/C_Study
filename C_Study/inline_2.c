#include <stdio.h>

__inline int max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int inline_2(void) {
	printf("3�� 2 �� �ִ밪�� %d\n", max(3, 2));
	return 0;
}
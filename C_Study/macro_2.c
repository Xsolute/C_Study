#include <stdio.h>
#define PrintVariableName(var) printf(#var"\n");
// #�� ���� ���ڸ� ���ڿ��� �ٲپ� ó����
int macro_2(void) {
	int someVar;
	PrintVariableName(someVar);
	return 0;
}
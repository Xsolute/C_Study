#include <stdio.h>

int string_4(void) {
	int num;
	char c;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	fflush(stdin); // stdin ���۸� ��� : GCC������ ������ ���
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%c", &c);

	return 0;
}
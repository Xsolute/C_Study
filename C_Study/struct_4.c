#include <stdio.h>

void add_one(int *a);

struct TEST {
	int c;
};

int struct_4(void) {
	struct TEST t;
	struct TEST *pt = &t;

	pt->c = 0; // pt�� ����Ű�� ����ü�� ������� c�� ���� �ٲ�
	
	add_one(&t.c);

	printf("t.c : %d\n", t.c);

	add_one(&pt->c);

	printf("t.c : %d\n", t.c);

	return 0;
}

void add_one(int *a) {
	*a += 1;
}
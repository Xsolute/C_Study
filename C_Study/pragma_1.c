#include <stdio.h>
#pragma pack(1) // ����ü�� 1����Ʈ ������ �����Ͻÿ�.

typedef struct Weird {
	char arr[2];
	int i;
} Weird;

int pragma_1(void) {
	Weird a;
	printf("size of a : %d\n", sizeof(a));
	return 0;
}
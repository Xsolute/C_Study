#include <stdio.h>

typedef struct test {
	int a, b;
} Test;

int struct_2(void) {
	Test st;
	Test *ptr;

	ptr = &st;

	ptr->a = 1; // (*ptr).a = 1;
	ptr->b = 2; // (*ptr).b = 2;

	printf("st�� ��� a = %d\n", st.a);
	printf("st�� ��� b = %d\n", st.b);

	return 0;
}
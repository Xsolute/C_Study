#include <stdio.h>
#define AddName(x,y) x##y
// ##�� �հ� ���� ���ڸ� ��ġ�� ������ �Ѵ� (x##y == xy)

int macro_3(void) {
	int AddName(a, b);
	ab = 3;
	printf("%d\n", ab);
	return 0;
}
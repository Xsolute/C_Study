#include <stdio.h>

int read_val(const int val);

int main(void) {
	int a;

	scanf("%d", &a);

	read_val(a);
	
	return 0;
}

int read_val(const int val) {
	val = 5; // ������ �ʴ´�.
	return 0;
}
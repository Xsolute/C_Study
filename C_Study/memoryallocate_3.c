#include <stdio.h>
#include <stdlib.h>

int memoryallocate_3(void) {
	int i, j, input, sum = 0;
	int subject, students;
	int **arr;

	printf("���� �� : ");
	scanf("%d", &subject);

	printf("�л� �� : ");
	scanf("%d", &students);

	arr = (int**)malloc(sizeof(int*)*subject);

	for (i = 0; i < subject; i++) {
		arr[i] = (int*)malloc(sizeof(int)*students);
	}

	for (i = 0; i < subject; i++) {
		printf("���� %d ���� ========\n", i);
		for (j = 0; j < students; j++) {
			printf("�л� %d ���� �Է� : ", j);
			scanf("%d", &input);

			arr[i][j] = input;
		}
	}
	for (i = 0; i < subject; i++) {
		sum = 0;
		for (j = 0; j < students; j++) {
			sum += arr[i][j];
		}
		printf("���� %d ��� ���� : %d\n", i, sum / students);
	}
	for (i = 0; i < subject; i++) {
		free(arr[i]);
	}
	free(arr);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int count = 10;
	// malloc, calloc, realloc

	// malloc�� �Ҵ��� �ϰ� �ʱ�ȭ�� �����ʽ��ϴ�.
	int* parray = (int*)malloc(sizeof(int) * 10);

	// calloc�� �Ҵ��� �ϰ� �Ҵ�� �޸𸮸� �ʱ�ȭ �մϴ�.
	int* parray2 = (int*)calloc(count, sizeof(int));


	for (int i = 0; i < count; i++) {
		printf("parray[%d] = %d\n", i, parray[i]);
	}

	for (int i = 0; i < count; i++) {
		printf("parray2[%d]=%d\n", i, parray2[i]);
	}


	int isLoop = 1;
	int initCount = 3;
	int* parray3 = NULL;
	int inputValue = 0;
	int inputCount = 0;

	parray3 = (int*)malloc(initCount * sizeof(int));
	 

	while (isLoop)
	{
		printf("�������� �Է��ϼ���.(exit: -1):");
		scanf("%d", &inputValue);

		if (inputValue == -1) {
			break;
		}

		// realloc�� �޸𸮸� ���Ҵ��Ҷ� ���
		if (inputCount >= initCount) {
			printf("��������� �����ؼ� ������ 3���߰��մϴ�.\n");
			initCount += 3;
			parray3 = (int*)realloc(parray3, sizeof(int) * initCount);
		}


		parray3[inputCount++] = inputValue;
	}

	printf("�Է��� ����:\n");
	for (int i = 0; i < inputCount; i++) {
		printf("parray3[%d] = %d\n", i, parray3[i]);
	}

	return 0;
}
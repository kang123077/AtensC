#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int count = 10;
	// malloc, calloc, realloc

	// malloc은 할당을 하고 초기화를 하지않습니다.
	int* parray = (int*)malloc(sizeof(int) * 10);

	// calloc은 할당을 하고 할당된 메모리를 초기화 합니다.
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
		printf("정수값을 입력하세요.(exit: -1):");
		scanf("%d", &inputValue);

		if (inputValue == -1) {
			break;
		}

		// realloc은 메모리를 재할당할때 사용
		if (inputCount >= initCount) {
			printf("저장공간이 부족해서 공간을 3개추가합니다.\n");
			initCount += 3;
			parray3 = (int*)realloc(parray3, sizeof(int) * initCount);
		}


		parray3[inputCount++] = inputValue;
	}

	printf("입력한 값은:\n");
	for (int i = 0; i < inputCount; i++) {
		printf("parray3[%d] = %d\n", i, parray3[i]);
	}

	return 0;
}
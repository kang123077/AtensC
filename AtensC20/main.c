#include <stdio.h>
#include <string.h>

int main() {
	int array[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };

	printf("복사 이전\n");
	for (int i = 0; i < 10; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}

	memcpy(array, array + 5, sizeof(int) * 5);

	printf("복사이후\n");
	for (int i = 0; i < 10; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}

	int array2[10] = { 1, 2, 3, 4, 5 };
	int array3[10] = { 1, 2, 3, 4, 5 };

	// 메모리 비교함수 memcmp
	// 메모리 내용이 같으면 0을 리턴, 다르면 src의 값과 src2의 값의 크기를 비교해서 1, -1 리턴
	if (memcmp(array2, array3, sizeof(int) * 10) == 0) {
		printf("array2와 array3가 일치\n");
	}
	else {
		printf("array2와 array3가 불일치\n");
	}

	array3[5] = 1000;
	if (memcmp(array2, array3, sizeof(int) * 10) == 0) {
		printf("array2와 array3가 일치\n");
	}
	else {
		printf("array2와 array3가 불일치\n");
	}


	char str[] = "I am a boy";
	char* pos;
	char inputvalue = '_';
	char* pstr = str;

	printf("변경 전 str = %s\n", str);

	while (1) {

		// 메모리에서 문자 검색 memchr
		// 없으면 NULL을 리턴
		// 있으면 해당 위치의 메모리 주소값을 리턴
		pos = (char*)memchr(pstr, 'a', strlen(pstr));

		if (pos != NULL) {
			*pos = inputvalue;
			pstr = pos + 1;
		}
		else {
			break;
		}
	}

	printf("변경 후 str = %s\n", str);

	return 0;
}
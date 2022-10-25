#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 문자배열 출력함수
void PrintString(char* str, int size) {
	for (int i = 0; i < size; i++) {
		putchar(str[i]);
	}
}

void PrintStr(char* str, int size) {
	PrintString(str, size);
}

// 문자열 출력함수
void PrintString2(char* str) {
	while (*str) {
		putchar(*str++);
	}
}

// 문자열의 문자의 갯수세는 함수
int stringLength(char* str) {
	int count = 0;   // 문자열 갯수 저장

	while (*str) {
		count++;
		str++;
	}


	return count;
}

int main() {
	// 2차원 배열에 구구단의 결과값을 입력하고
	// 출력 해 보세요

	//int array[8][9];

	//for (int i = 0; i < 8; i++) {
	//	for (int j = 0; j < 9; j++) {
	//		array[i][j] = (i + 2) * (j + 1);
	//	}
	//}

	//for (int i = 0; i < 8; i++) {
	//	for (int j = 0; j < 9; j++) {
	//		printf("%d X %d = %d\n", (i + 2), (j + 1), array[i][j]);
	//	}
	//}

	//char str[] = { 'M', 'O', 'N', 'S', 'T', 'E', 'R' };   // 문자배열
	//char str2[] = "MONSTER";   // 문자열

	//printf("str size = %d\n", sizeof(str));
	//printf("str2 size = %d\n", sizeof(str2));

	//printf("\n");

	//PrintStr(str, sizeof(str));

	//printf("\n");

	//PrintString2(str2);

	//printf("\n");

	//PrintString2(str);

	//return 0;


	// 문자열함수
	char* str = "MONSTER";
	char str2[] = { 'M', 'O', 'N', 'S', 'T', 'E', 'R', '\0' };
	char str3[30];
	char str4[] = " Is World!!";

	// 문자열의 문자의 갯수를 구해주는 함수 strlen
	int length = strlen(str);
	printf("str의 문자의 갯수는: %d\n", length);

	length = strlen(str4);
	printf("str4의 문자의 갯수는: %d\n", length);


	// 문자열을 카피해주는 함수 strcpy
	strcpy(str3, str2);
	printf("str3: %s\n", str3);

	// 문자열 병합해주는 함수 strcat
	strcat(str3, str4);

	printf("str3: %s\n", str3);

	// 문자열 비교함수
	// 두문자열이 같으면 0을 리턴
	// 다르면 1, -1을 리턴
	int comp = strcmp(str, str2);

	if (comp == 0) {
		printf("str: %s 와 str2: %s 가 같습니다.\n", str, str2);
	}
	else {
		printf("str: %s 와 str2: %s 가 다릅니다.\n", str, str2);
	}

	comp = strcmp(str, str4);

	if (comp == 0) {
		printf("str: %s 와 str4: %s 가 같습니다.\n", str, str4);
	}
	else {
		printf("str: %s 와 str4: %s 가 다릅니다.\n", str, str4);
	}

	char str5[] = "MONSTER IS WORLD!!";

	int length2 = stringLength(str5);
	printf("str의 문자의 갯수는: %d\n", length2);

	return 0;
}
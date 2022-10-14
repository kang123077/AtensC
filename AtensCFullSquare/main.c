#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// 꽉 찬 직각사각형
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 빈 직각사각형
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0 || i == 9) {
				printf("*");
			}
			else if (j == 0 || j == 9) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	// 직각 삼각형
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	// Column과 row값을 입력받아서
	// 속이 빈 정사각형이나 직사각형을 만들어야 합니다.

	int column = 0;
	int row = 0;

	printf("column값을 입력 해 주세요");
	scanf("%d", &column);
	printf("row값을 입력 해 주세요");
	scanf("%d", &row);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (i == 0 || i == (row - 1)) {
				printf("*");
			}
			else if (j == 0 || j == (column - 1)) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
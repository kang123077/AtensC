#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// �� �� �����簢��
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("*");
		}
		printf("\n");
	}

	// �� �����簢��
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

	// ���� �ﰢ��
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	// Column�� row���� �Է¹޾Ƽ�
	// ���� �� ���簢���̳� ���簢���� ������ �մϴ�.

	int column = 0;
	int row = 0;

	printf("column���� �Է� �� �ּ���");
	scanf("%d", &column);
	printf("row���� �Է� �� �ּ���");
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
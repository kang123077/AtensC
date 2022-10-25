#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ���ڹ迭 ����Լ�
void PrintString(char* str, int size) {
	for (int i = 0; i < size; i++) {
		putchar(str[i]);
	}
}

void PrintStr(char* str, int size) {
	PrintString(str, size);
}

// ���ڿ� ����Լ�
void PrintString2(char* str) {
	while (*str) {
		putchar(*str++);
	}
}

// ���ڿ��� ������ �������� �Լ�
int stringLength(char* str) {
	int count = 0;   // ���ڿ� ���� ����

	while (*str) {
		count++;
		str++;
	}


	return count;
}

int main() {
	// 2���� �迭�� �������� ������� �Է��ϰ�
	// ��� �� ������

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

	//char str[] = { 'M', 'O', 'N', 'S', 'T', 'E', 'R' };   // ���ڹ迭
	//char str2[] = "MONSTER";   // ���ڿ�

	//printf("str size = %d\n", sizeof(str));
	//printf("str2 size = %d\n", sizeof(str2));

	//printf("\n");

	//PrintStr(str, sizeof(str));

	//printf("\n");

	//PrintString2(str2);

	//printf("\n");

	//PrintString2(str);

	//return 0;


	// ���ڿ��Լ�
	char* str = "MONSTER";
	char str2[] = { 'M', 'O', 'N', 'S', 'T', 'E', 'R', '\0' };
	char str3[30];
	char str4[] = " Is World!!";

	// ���ڿ��� ������ ������ �����ִ� �Լ� strlen
	int length = strlen(str);
	printf("str�� ������ ������: %d\n", length);

	length = strlen(str4);
	printf("str4�� ������ ������: %d\n", length);


	// ���ڿ��� ī�����ִ� �Լ� strcpy
	strcpy(str3, str2);
	printf("str3: %s\n", str3);

	// ���ڿ� �������ִ� �Լ� strcat
	strcat(str3, str4);

	printf("str3: %s\n", str3);

	// ���ڿ� ���Լ�
	// �ι��ڿ��� ������ 0�� ����
	// �ٸ��� 1, -1�� ����
	int comp = strcmp(str, str2);

	if (comp == 0) {
		printf("str: %s �� str2: %s �� �����ϴ�.\n", str, str2);
	}
	else {
		printf("str: %s �� str2: %s �� �ٸ��ϴ�.\n", str, str2);
	}

	comp = strcmp(str, str4);

	if (comp == 0) {
		printf("str: %s �� str4: %s �� �����ϴ�.\n", str, str4);
	}
	else {
		printf("str: %s �� str4: %s �� �ٸ��ϴ�.\n", str, str4);
	}

	char str5[] = "MONSTER IS WORLD!!";

	int length2 = stringLength(str5);
	printf("str�� ������ ������: %d\n", length2);

	return 0;
}
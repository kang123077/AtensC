#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// main�Լ��� ���α׷��� �������� �˷��ִ� ��Ȱ�� �մϴ�.
// entry point, �������Լ�
// returntype main(�Ű�����){   ���������
// ��ɾ�
//}

//int main(int argc, char* argv[]) {
//
//	for (int i = 0; i < argc; i++) {
//		printf("%s\n", argv[i]);
//	}
//
//	return 0;
//}

//int main(int argc, char* argv[]) {
//
//	int sum = 0;
//
//	// argv[0]�� ���ϳ����̾ ��꿡 ���� ���� ����.
//	for (int i = 1; i < argc; i++) {
//		sum += atoi(argv[i]);   // �Է¹��� ���ڸ� ���ڸ� ���ڰ����� �������ִ� �Լ�
//	}
//
//
//	printf("�Է¹��� ���ڰ��� ������: %d\n", sum);
//
//	return 0;
//}

//int main(int argc, char* argv[]) {
//	int a = 0;
//	int b = 0;
//	printf("�� ���� �Է��ϼ���: ");
//	scanf("%d%d", &a, &b);
//
//	if (strcmp(argv[1], "add") == 0) {
//		printf("%d + %d = %d\n", a, b, a + b);
//	}
//	else if (strcmp(argv[1], "sub") == 0) {
//		printf("%d - %d = %d\n", a, b, a - b);
//	}
//	else if (strcmp(argv[1], "mul") == 0) {
//		printf("%d x %d = %d\n", a, b, a * b);
//	}
//	else if (strcmp(argv[1], "div") == 0) {
//		printf("%d / %d = %f\n", a, b, a / (float)b);
//	}
//	else {
//		printf("���ڸ� �߸� �Է��ϼ̽��ϴ�.\nadd, sub, mul, div �߿� �ϳ��� ���ڿ��� ���ڷ� �����ϼ���.\n");
//	}
//
//	return 0;
//}

// ������ �迭
//int main() {
//	int array1[10];   // ������ �迭
//	int array[5][5];   // ������ �迭
//
//	array[0][0] = 1;
//	array[0][1] = 2;
//	array[2][1] = 100;
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			array[i][j] = i * 5 + j;
//		}
//	}
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("array[%d][%d] = %d\n", i, j, array[i][j]);
//		}
//	}
//
//	return 0;
//}

//int main() {
//	int array[10][10];
//
//	printf("array = %d\n", array);
//
//	printf("array + 1 = %d\n", array + 1);
//
//	return 0;
//}

void Print2DArray(int(*parray)[10], int column, int row) {
	// ������ �迭�� ���� ����غ�����...
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			printf("parray[%d][%d] = %d\n", i, j, parray[i][j]);
		}
	}
}

int main() {
	int array[10][10];

	int(*parray)[10] = array;

	array[2][1] = 100;

	*(*(array + 2) + 1) = 100;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			array[i][j] = i * 10 + j;
		}
	}

	Print2DArray(array, 10, 10);

	return 0;
}
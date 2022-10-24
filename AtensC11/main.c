#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// main함수는 프로그램의 시작점을 알려주는 역활을 합니다.
// entry point, 진입점함수
// returntype main(매개변수){   명령행인자
// 명령어
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
//	// argv[0]은 파일네임이어서 계산에 포함 하지 않음.
//	for (int i = 1; i < argc; i++) {
//		sum += atoi(argv[i]);   // 입력받은 숫자를 문자를 숫자값으로 변경해주는 함수
//	}
//
//
//	printf("입력받은 인자값의 총합은: %d\n", sum);
//
//	return 0;
//}

//int main(int argc, char* argv[]) {
//	int a = 0;
//	int b = 0;
//	printf("두 값을 입력하세요: ");
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
//		printf("인자를 잘못 입력하셨습니다.\nadd, sub, mul, div 중에 하나의 문자열을 인자로 전달하세요.\n");
//	}
//
//	return 0;
//}

// 이차원 배열
//int main() {
//	int array1[10];   // 일차원 배열
//	int array[5][5];   // 이차원 배열
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
	// 이차원 배열의 값을 출력해보세요...
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
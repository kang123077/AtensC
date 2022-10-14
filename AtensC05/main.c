#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// goto문 위로 가면 상향식 분기 아래로 가면 하향식 분기
// 분기 시 논리적 흐름을 거스르기 때문에 상향식 분기는 가급적 사용 자제

int main() {
	int inputValue = 0;

Start:
	printf("정수값을 입력하세요: ");
	scanf("%d", &inputValue);

	if (inputValue < 0) {
		goto Exit;
	}

	goto Start;

	printf("프로그램 종료중\n"); // 실행이 안 됨

Exit: // 레이블 (프로그램의 실행 위치)

	printf("프로그램 종료!\n");

	for (int i = 0; i < 10; i++) { // 초기식, 조건식, 증감식
		printf("%d", i);
	}

	for (int i = 0; i < 10; i++) { // 이중 반복문
		for (int j = 0; j < 10; j++) {
			printf("i = %d, j = d%", i, j);
		}
	}

	/*
	for (;;) { // 무한 루프
		printf("Loop");
	}
	*/

	//초기식 생략 가능
	int count = 0;
	for (; count < 10;) {
		count++;
		printf("count = %d\n", count);
	}

	// for문은 반복횟수를 아는 경우에 사용하기 좋다

	float value = 32342.234f;

	// while(조건식){
	   // 명령어;
	//}
	//반복횟수는 모르겠지만
	// while문의 조건식을 만족한다면 
	// 명령어를 얼마든지 반복해도 될때

	value = -1;
	while (value > 0) {
		value -= 123.2312f;

		printf("value = %f\n", value);
	}

	/*
	for (; value > 0;) {

	}
	*/

	// do-while문은 조건을 뒤에서 따지기 떄문에
	// 명령어가 한번은 실행이 됩니다.
	// do-while은 사용 빈도가 낮습니다.
	do {
		value += 123.4123f;
		printf("value = %f\n", value);
	} while (value < 3000.0f);

	for (int i = 0; i < 100; i++) {
		if (i % 2 == 1) {
			continue;
		}
		printf("i = %d\n", i);
	}

	for (int i = 0; i < 1000; i++) {
		for (int j = 0; j < 500; j++) {
			if (i % 2 == 0 && j % 5 == 0) {
				printf("i = %d, j = %d\n", i, j);
				break; // break문은 반복문을 탈출할 때 사용한다
			}
		}
	}

	int value1 = 30000;
	int value2 = 100000;

	int flag = 0;

	while (1) {
		while (value > 0) {
			while (value > 0) {
				value2 -= 3;

				if (value1 < 1400 && value2 < 3000) {
					flag = 1;
					break;
				}
			}
			value1 -= 5;

			if (flag == 1) {
				break;
			}
		}
		if (flag == 1) {
			break;
		}
	}

	// 중첩 반복문에서 break를 통해서 나오는 과정이 상당히 복잡하다
	// 이럴 때 goto문을 사용할 수도 있다.

	while (1) {
		while (value1 > 0) {
			while (value2 > 0) {
				value2 -= 3;

				if (value1 < 14000 && value2 < 3000) {
					goto LoopExit;
				}

			}
			value1 -= 5;
		}
	}


LoopExit:

	return 0;
}
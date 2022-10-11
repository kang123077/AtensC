#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a = 1;
	int b = 2;

	int ret = a / b;
	printf("%d / %d = %d\n", a, b, ret);

	float fret = a / b;
	printf("%d / %d = %d\n", a, b, fret);

	fret = a / (float)b;
	
	//한쪽을 float형으로 형변환을 해서
	//정수 / 실수로 바꾼다.

	printf("%d / %d = %f\n", a, b, fret);

	int c = 11;
	int d = 2;

	int ret2 = a % b;
	printf("%d %% %d = %d\n", c, d, ret2);

	//나머지 연산자는 임의의 값을 의미있는 일정한 범위의
	//값으로 만들 때 사용합니다.

	srand(time(NULL)); //현재의 시간을 난수 발생 시드값으로 설정
	int randValue = 0;
	int direction = 0;

	randValue = rand(); //난수 발생 (임의의 값)
	direction = randValue % 4; //난수를 0~3사이의 범위의 숫자로 변경
	printf("randValue = %d, direction = %d\n", randValue, direction);

	switch (direction) {
		case 0:
			printf("북쪽으로 이동\n");
			break;
		case 1:
			printf("남쪽으로 이동\n");
			break;
		case 2:
			printf("서쪽으로 이동\n");
			break;
		case 3:
			printf("동쪽으로 이동\n");
			break;
	}
	
	int e = 20;

	ret = -e;
	//부호연산자 "-"
	//연산자(operator) = -피연산자(operand)
	//단항연산자 ex) a+b = 이항연산자

	printf("%d\n", ret);

	int f = 30;

	ret = e < f; // 연산의 결과 데이터 타입 = 참거짓(논리값) = boolean
	// c언어에는 논리타입이 없다
	// 정수값을 가지고 논리 타입을 처리함
	// 0은 거짓, 0이외의 숫자는 참으로 받아들임
	
	printf("e:%d < f:%d = %d\n", e, f, ret);

	ret = e > f;
	printf("e:%d > f:%d = %d\n", e, f, ret);

	ret = e <= f;
	printf("e:%d <= f:%d = %d\n", e, f, ret);

	ret = e >= f;
	printf("e:%d >= f:%d = %d\n", e, f, ret);

	ret = e == f;
	printf("e:%d == f:%d = %d\n", e, f, ret);

	ret = e != f;
	printf("e:%d != f:%d = %d\n", e, f, ret);

	int true = 1;
	int false = 0;

	ret = true && true;
	printf("true && true = %d\n", ret);

	ret = true && false;
	printf("true && false = %d\n", ret);

	ret = false && true;
	printf("false && true = %d\n", ret);

	ret = false && false;
	printf("flase && false = %d\n", ret);

	ret = true || true;
	printf("true || true = %d\n", ret);

	ret = true || false;
	printf("true || false = %d\n", ret);

	ret = false || true;
	printf("false || true = %d\n", ret);

	ret = false || false;
	printf("false || false = %d\n", ret);

	int x = 0;

	printf("임의의 x좌표값을 입력하세요: ");
	scanf("%d", &x);

	ret = (0 < x) && (x < 10);

	printf("0 < x:%d < 10 = %d\n", x, ret);

	// 박스 toppt(5, 5), bottompt(10, 10)와
	// 입력받은 점이 박스와 겹쳤는지 확인하는 로직을 만들어보세요

	// 두 박스가 겹쳤는지 확인하는 로직을 만들어 보세요

	return 0;
}
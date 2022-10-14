#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 20;

	if (a <= 20) { // 단일 조건문
		printf("a:%d는 20보다 작거나 같다.\n", a);
	}

	if (10 < a && a < 20) {
		printf("a:%d는 10보다 크고 20보다 작다.\n", a);
	}

	// C언어에서는 논리값을 정수값으로 처리하기 때문에
	// 조건식에 정수식을 사용할 수 있다.
	if (!(a - 20)) {
		printf("a:%d는 20과 같다\n", a);
	}

	float b = 3.4f;

	if (b > 0.0f) {
		printf("b:%f는 0.0f보다 작다\n", b);
	}
	else {
		printf("b:%f는 0.0f보다 크거나 같다.\n", b);
	}

	if (a < 0) {
		printf("a:%d는 0보다 작다.\n", a);
	}
	else {
		if (!(a - 20)) {
			printf("a:%d는 20과 같다.\n", a);
		}
		else {
			printf("a:%d는 20보다 크다.\n", a);
		}
	}

	int money = 0;

	printf("아버지가 주실 용돈 액수를 입력하세요: ");
	scanf("%d", &money);

	// 조건이 여러개 일때
	// 호출 횟수가 많을 경우 효율성을 위해
	// 확률이 높은 부분을 맨 위에 배치한다
	// ex) 중국집으로 갈 확률이 제일 높은 경우
	if ((money > 40000) && (money <= 60000)) {
		printf("중국집으로 간다\n");
	}
	else if (money > 100000) { // 다중 조건문
		printf("PC방으로 간다\n");
	}
	else if ((money > 60000) && (money <= 100000)) {
		printf("노래방으로 간다\n");
	}
	else if ((money > 20000) && (money <= 40000)) {
		printf("라면이나 먹는다\n");
	}
	else { // else문은 생략 가능
		printf("낮잠이나 잔다\n");
	}

	int buttonNum = 0;

	printf("리모트 컨트롤의 버튼 번호를 입력하세요: ");
	scanf("%d", &buttonNum);

	// 정수값의 변화에 따라서 분기시킬 때
	// Switch-case문 사용

	switch (buttonNum) {
	case 1:
		printf("TV를 끈다\n");
		break;
	case 2:
		printf("TV를 켠다\n");
		break;
	case 3:
		printf("볼륨을 높인다\n");
		break;
	case 4:
		printf("볼륨을 낮춘다\n");
		break;
	case 5:
		printf("채널을 높인다\n");
		break;
	case 6:
		printf("채널을 낮춘다\n");
		break;
	default: // default는 생략 가능
		printf("지정되지 않은 버튼입니다.\n");
		break;
	}

	char oper = 0;

	printf("연산 방법을 입력하세요(\+, \-, \*, \/) : ");
	scanf(" %c", &oper);

	// switch case 문안에서 변수를 정의할 떄는
	// { } 중괄호 블럭을 만들고 안에 변수를 정의해야 한다.

	switch (oper)
	{
	case '+': {
		int a = 20;
		int b = 30;
		printf("%d + %d = %d\n", a, b, a + b);
		break;
	}
	case '-': {
		int a = 20;
		int b = 30;
		printf("%d - %d = %d\n", a, b, a - b);
		break;
	}
	case '*': {
		int a = 20;
		int b = 30;
		printf("%d * %d = %d\n", a, b, a * b);
		break;
	}
	case '/': {
		int a = 20;
		int b = 30;
		printf("%d / %d = %f\n", a, b, a / (float)b);
		break;
	}
	default:
		printf("부호를 입력해주세요");
		break;
	}

	int number = 0;

	printf("숫자를 입력 해 주세요: ");
	scanf("%d", &number);

	switch (number) {
	case 0:
	case 1:
	case 2:
		printf("0~2 사이의 숫자를 입력하셨습니다.\n");
		break;
	case 5:
	case 6:
	case 7:
		printf("5~7 사이의 숫자를 입력하셨습니다.\n");
		break;
	default:
		printf("0, 1, 2, 5, 6, 7 이외의 숫자를 입력하셨습니다.\n");
		break;
	}

	return 0;
}
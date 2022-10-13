#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main() {

	char oper = 0;

	printf("연산 방법을 입력하세요(+, -, *, /) :");
	scanf("%c", &oper);

	// switch case 문안에서 변수를 정의할 떄는
	// { } 중괄호 블럭을 만들고 안에 변수를 정의해야 한다.

	switch (oper)
	{
	case '+': {
		int a = 20;
		int b = 30;
		printf("%d + %d = %d\n", a, b, a + b);
	}
	break;
	case '-': {
		int a = 20;
		int b = 30;
		printf("%d - %d = %d\n", a, b, a - b);
	}
	break;
	case '*': {
		int a = 20;
		int b = 30;
		printf("%d * %d = %d\n", a, b, a * b);
	}
	break;
	case '/': {
		int a = 20;
		int b = 30;
		printf("%d / %d = %f\n", a, b, (float)a / (float)b);
	}
	break;
	default:
		printf("부호를 입력해주세요");
		break;
	}

	int inputValue = 0;
	double finputValue = 0.0;

	printf("정수값을 입력하세요: ");
	scanf("%d", &inputValue);
	printf("실수값을 입력하세요: ");
	scanf("%lf", &finputValue);


	switch (inputValue) {
	case 10:
		printf("inputValue 10입니다.");
		break;

	case 20:
		printf("inputValue 20입니다.");
		break;

	case 30:
		printf("inputValue 30입니다.");
		break;

	default:
		if (finputValue == 1.2) {
			printf("inputValue 1.2입니다.");
		}
		else if (finputValue == 3.4) {
			printf("inputValue 3.4입니다.");
		}
		else {
			printf("값을 잘못 입력하셨습니다.");
		}
		break;
	}

	return 0;
}
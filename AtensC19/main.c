//#include <stdio.h>
//
//int add(int a, int b) {
//	int temp = 0;
//	temp = a + b;
//	return temp;
//}
//
//int sub(int a, int b) {
//	int temp = 0;
//	temp = a - b;
//	return temp;
//}
//
//int mul(int a, int b) {
//	int temp = 0;
//	temp = a * b;
//
//	return temp;
//}
//
//int main() {
//	// 리턴값(*변수명)(매개변수의 데이타 타입);
//	// 리턴값은 int고 매개변수로는 int값 두개를
//	// 취하는 함수에 대한 주소값을 저장하는 변수
//	int(*pfunc)(int, int);   // 함수 포인터 변수
//
//	int a = 20;
//	int b = 30;
//
//	pfunc = &add;
//	printf("pfunc = %p\n", pfunc);
//	printf("&add = %p\n", &add);
//
//	int ret = pfunc(a, b);
//
//	printf("%d + %d = %d\n", a, b, ret);
//
//	pfunc = sub;
//
//	ret = pfunc(a, b);
//	printf("%d - %d = %d\n", a, b, ret);
//
//	pfunc = mul;
//
//	ret = pfunc(a, b);
//	printf("%d x %d = %d\n", a, b, ret);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//float add(int a, int b) {
//    return a + b;
//}
//
//float sub(int a, int b) {
//    return a - b;
//}
//
//float mul(int a, int b) {
//    return a * b;
//}
//
//float div(int a, int b) {
//    return a / (float)b;
//}
//
//
//float calculator(float(*pfunc)(int, int), int a, int b) {
//    return pfunc(a, b);
//}
//
//int main() {
//    char oper = 0;
//    int a = 20;
//    int b = 30;
//    float ret = 0;
//    printf("연산방법을 입력하세요 (+,-, x, /): ");
//    scanf("%c", &oper);
//
//    switch (oper) {
//    case '+':
//        ret = calculator(add, a, b);
//        printf("%d + %d = %.2f\n", a, b, ret);
//        break;
//
//    case '-':
//        ret = calculator(sub, a, b);
//        printf("%d - %d = %.2f\n", a, b, ret);
//        break;
//
//    case 'x':
//        ret = calculator(mul, a, b);
//        printf("%d x %d = %.2f\n", a, b, ret);
//        break;
//
//    case '/':
//        ret = calculator(div, a, b);
//        printf("%d / %d = %.2f\n", a, b, ret);
//        break;
//    }
//
//
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//float add(int a, int b) {
//    return a + b;
//}
//
//float sub(int a, int b) {
//    return a - b;
//}
//
//float mul(int a, int b) {
//    return a * b;
//}
//
//float div(int a, int b) {
//    return a / (float)b;
//}
//
//
//float calculator(float(*pfunc)(int, int), int a, int b) {
//    return pfunc(a, b);
//}
//
//int main() {
//    char oper = 0;
//    int operNum = 0;
//
//    int a = 20;
//    int b = 30;
//    float ret = 0;
//    char operArray[] = { '+', '-', 'x', '/' };
//
//    float(*pfuncArray[4])(int, int); // 함수 포인터 배열
//
//    pfuncArray[0] = add;
//    pfuncArray[1] = sub;
//    pfuncArray[2] = mul;
//    pfuncArray[3] = div;
//
//    printf("계산할 두 값을 입력하세요.(10,20) : ");
//    scanf("%d,%d", &a, &b);
//    printf("연산방법을 입력하세요 (+,-, x, /): ");
//    scanf("%*c%c", &oper);
//
//    switch (oper) {
//    case '+':
//        operNum = 0;
//        break;
//
//    case '-':
//        operNum = 1;
//        break;
//
//    case 'x':
//        operNum = 2;
//        break;
//
//    case '/':
//        operNum = 3;
//        break;
//    }
//
//    printf("%d %c %d = %f\n", a, operArray[operNum], b, pfuncArray[operNum](a, b));
//
//
//    return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Packet {
	int CommandNum;
	void* Data;
};

void Move() {
	printf("Move\n");
}

void Attack() {
	printf("Attack\n");
}

void Chat() {
	printf("Chat\n");
}

void Run() {
	printf("Run\n");
}

void Item() {
	printf("Item\n");
}

int main() {
	int inputValue = 0;
	void(*pfuncArray[])() = { Move, Attack, Chat, Run, Item };
	int length = sizeof(pfuncArray) / sizeof(pfuncArray[0]);

	while (1) {
		printf("캐릭터의 행동번호를 입력하세요: ");
		scanf("%d", &inputValue);

		if (inputValue == -1) break;

		if (inputValue >= length) {
			printf("Wrong Number\n");
		}
		else {
			pfuncArray[inputValue]();   // 함수포인터배열을 사용하여 함수 호출

			/*
			// 함수포인터를 사용하지 않을 경우
			switch (inputValue) {
			case 0:
			   Move();
			   break;

			case 1:
			   Attack();
			   break;

			case 2:
			   Chat();
			   break;

			case 3:
			   Run();
			   break;

			case 4:
			   Item();
			   break;

			default:
			   printf("WrongNumber\n");
			   break;

			}
			*/
		}
	}

	return 0;
}

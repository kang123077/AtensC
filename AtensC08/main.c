#include <stdio.h>

typedef struct tagCar {
	int type;   // 0: 승용차, 1: 트럭, 2: 버스
	int wheelCount;   // 바퀴수
	int sitCount;   // 좌석수
	int isCargo;   // 화물칸유무

	struct tagCar* Next;   // 다음 자동차변수의 주소값 저장
} Car;

// returntype : 함수가 묶여있는 명령어처리하고 어떤 datatype의 결과값
// 을 돌려줄것인지를 지정, (void : 리턴값을 없다는 의미입니다.)
// 함수명: 묶어놓은 명령어를 실행할때 사용할 이름.
// 매개변수(parameter): 함수를 호출할때 전달된 값을 가지고 함수내부로 들어오는 변수

// returntype 함수명(매개변수) {
// 명령어 ;
//}

// void PrintMonster(); <= 함수의 원형(prototype)
void PrintMonster() // 함수 구현부
{
	printf("Monster");
	printf("Monster");
	printf("Monster");
	printf("Monster");
	printf("Monster");
}

// 정수값 2개를 덧셈하는 함수
// returntype이 있는 경우에는 반듯이 return문이 있습니다.
// return문은 함수의 명령어를 처리한 결과값을 함수외부로 전달하는
// 역활을 합니다.
// 호출시 전달된 인자값을 받는 변수를 매개변수라고 합니다.
// a와 b변수가 매개변수입니다.

int add(int a, int b) {
	int sum;
	sum = a + b;

	return sum;
}

int sub(int a, int b) {
	int sum;
	sum = a - b;

	return sum;
}

int mul(int a, int b) {
	int sum;
	sum = a * b;

	return sum;
}

int div(int a, int b) {
	int sum;
	sum = a / b;

	return sum;
}

// 곱셈/ 나눗셈 함수를 만들어 보세요.
// 만드시고 main함수에서 호출하여 연산한 결과값을 출력하세요...

int main() {
	//struct tagCar a;
	Car bmw;
	bmw.type = 0;
	bmw.wheelCount = 4;
	bmw.sitCount = 5;
	bmw.isCargo = 1;

	Car* pb = &bmw;

	// 구조체 변수의 주소값으로 구조체 멤버에 접근
	// 할 때는 화살표(->) 연산자를 사용한다.

	printf("타입 : %d\n", pb->type);
	printf("바퀴 수 : %d\n", pb->wheelCount);
	printf("좌석 수 : %d\n", pb->sitCount);
	printf("짐칸 : %d\n", pb->isCargo);

	Car a;
	Car b;
	Car c;
	Car d;

	a.type = 0;
	a.wheelCount = 4;
	a.sitCount = 5;
	a.isCargo = 1;
	a.Next = &b;

	b.type = 1;
	b.wheelCount = 6;
	b.sitCount = 4;
	b.isCargo = 1;
	b.Next = &c;

	c.type = 2;
	c.wheelCount = 8;
	c.sitCount = 48;
	c.isCargo = 1;
	c.Next = &d;

	d.type = 3;
	d.wheelCount = 8;
	d.sitCount = 48;
	d.isCargo = 1;
	d.Next = NULL;

	// a변수를 가지고 d변수의 멤버의 값을 접근.
	printf("d.type = %d\n", a.Next->Next->Next->type);
	printf("d.wheelCount = %d\n", a.Next->Next->Next->wheelCount);
	printf("d.sitCount = %d\n", a.Next->Next->Next->sitCount);
	printf("d.IsCargo = %d\n", a.Next->Next->Next->isCargo);

	// a변수를 가지고 c변수의 멤버의 값을 
	// type = 1
	// wheelCount = 6
	// sitCount = 8
	// IsCargo = 0
	// 으로 변경한 후에 값을 출력해보세요....

	// a변수를 가지고 c변수의 멤버의 값 변경
	a.Next->Next->type = 1;
	a.Next->Next->wheelCount = 6;
	a.Next->Next->sitCount = 8;
	a.Next->Next->isCargo = 0;

	// c변수의 값 출력
	printf("c.type = %d\n", a.Next->Next->type);
	printf("c.wheelCount = %d\n", a.Next->Next->wheelCount);
	printf("c.sitCount = %d\n", a.Next->Next->sitCount);
	printf("c.IsCargo = %d\n", a.Next->Next->isCargo);

	char* typeArray[] = { "승용차", "버스", "트럭", "화물차" };
	char* IsCargoArray[] = { "없다" , "있다" };

	Car* Current = &a;

	while (Current != NULL)
	{
		printf("타입: %s\n", typeArray[Current->type]);
		printf("바퀴수: %d\n", Current->wheelCount);
		printf("좌석수:  %d\n", Current->sitCount);
		printf("짐칸유무: %s\n", IsCargoArray[Current->isCargo]);
		printf("\n");

		Current = Current->Next;
	}

	PrintMonster();

	int a2 = 20;
	int b2 = 30;

	int ret = add(a2, b2);   // 함수를 호출할때 전달되는 값을 인자(argument)라고 합니다.

	printf("%d + %d = %d\n", a2, b2, ret);

	ret = sub(a2, b2);

	printf("%d - %d = %d\n", a2, b2, ret);

	ret = mul(a2, b2);

	printf("%d * %d = %d\n", a2, b2, ret);

	ret = div(a2, b2);

	printf("%d / %d = %f\n", a2, b2, (float)ret);


	return 0;
}
#include <stdio.h>

int main() {
	
	int a = 20;
	int b = 30;
	int c = 0;

	int max = a > b ? b : a;

	printf("a:%d 와 b:%d 중에 큰 값은 %d\n", a, b, max);

	a < b ? printf("a:%d 가 작다\n", a) : printf("b:%d가 크거나 같다\n", b);

	a = 20;
	++a; // 전위식
	// a = a + 1;
	printf("++a = %d\n", a);

	a = 20;
	a++; // 후위식
	// a = a + 1;
	printf("++a = %d\n", a);

	a = 20;
	c = 0;
	c = ++a; // 전위식
	// a = a + 1;
	// c = a;
	printf("a = %d, c = %d\n", a, c);

	a = 20;
	c = 0;
	c = a++; // 후위식
	// c = a;
	// a = a + 1;
	printf("a = %d, c = %d\n", a, c);

	a = 20;
	--a;
	// a = a - 1;
	printf("--a = %d\n", a);

	a = 20;
	float f = 12.45f;
	a = f;
	printf("a = %d\n", a);
	// 기본 데이터 타입간에는 컴파일러가 형변환을 자동으로 해줌
	// 묵시적 형변환이라고 함

	a = 20;
	f = 12.45f;
	a = (int)f;
	printf("a = %d\n", a);
	// 되도록 명시적 형변환을 해 주는 것이 좋음

	a = 20;
	f = 12.45f;
	f = a;
	printf("f = %f\n", f);
	// 정수값을 실수형 변수에 대입하는 경우에는
	// 값의 유실이 발생하지 않으므로
	// 묵시적 형변환을 해도 문제가 되지 않는다

	a = 20;
	// 대입연산자의 축약형
	a += 1;
	// a = a + 1;
	printf("a = %d\n", a);

	f = 30;
	f /= 2;
	// f = f / 2;
	printf("f = %f\n", f);

	unsigned char c1 = 1;
	unsigned char c2 = 3;

	// c1 : 00000001
	// c2 : 00000011

	// & : 비트 AND 연산자
	// a & b : 00000001
	printf("a & b = %d\n", c1 & c2);

	// | : 비트 OR 연산자
	// a | b : 00000011
	printf("a | b = %d\n", c1 | c2);

	// ~ : 비트 NOT 연산자
	// ~a : 11111110
	printf("~a = %u\n", (unsigned char)~c1);

	// ^ : 배타적 OR 연산자 (XOR)(Exclusive OR)
	// a ^ b : 00000010
	printf("a ^ b = %d\n", c1 ^ c2);

	//비트 연산자
	unsigned char light = 0;
	unsigned char mask = 1;

	// light : 00000000 (각 자리마다 특정한 방을 가정)
	// mask : 00000001

	// 시프트 연산자 "<<"
	mask = 1;
	// mask :
	// 00000001 = 1

	mask = mask << 1;
	printf("mask = %d\n", mask);
	// 00000010 = 2 (저장공간 밖으로 밀려 난 후에 빈 공간은 0으로 초기화)

	mask = mask << 2;
	printf("mask = %d\n", mask);
	// 00001000 = 8
	// 시프트 연산자 좌측 1비트는 x2와 동일

	mask = mask >> 1;
	printf("mask = %d\n", mask);
	// 00001000 = 4
	// 시프트 연산자 우측 1비트는 /2와 동일

	mask = 1;
	mask = mask << 3;
	light = light | mask; // 특정 비트값을 1으로 만들 때 사용
	printf("light = %d\n", light);
	// 00000000 (light)
	// 00001000 (mask)
	// 00001000 (light)
	// mask on

	mask = 1;
	// 00000001
	mask = mask << 3;
	// 00001000
	mask = ~mask;
	// 11110111

	light = light & mask; // 특정 비트값을 0으로 만들 때 사용
	printf("light = %d\n", light);
	// 00001000 (light)
	// 11110111 (mask)
	// 00000000 (light)
	// mask off

	// 컴퓨터에는 뺄셈 로직이 없음
	// 가산 (덧셈) 만 할줄 앎
	// 뺄셈은 보수 연산을 통해서 처리

	char ac = 2;
	char bc = 2;
	char cc = 0;

	cc = ac - bc; // a + (-b);
	// 00000010 (2)
	// 11111101 (1의 보수) (-1)
	// 11111110 (1의보수 + 1 = 2의 보수) (-2)

	//  00000010
	//  11111110
	// 100000000 (튀어나온건 버려서 전부 0이된다)

	ac = 2;
	bc = 1;

	cc = ac - bc;
	// a + (-b);

	// 00000010 (2)
	// 00000001 (1)
	// 11111110 (1의 보수)
	// 11111101 (2의 보수)
	
	//  00000010
	//  11111111
	// 100000001 (튀어나온건 버려서 1만 남는다)

	return 0;
}
#include <stdio.h>

int main() {
	int a;
	a = 10;

	int b;
	b = 20;

	int* pa = &a;   // 포인터형지정자
	int* pb = &b;

	int* temp = pa;
	pa = pb;
	pb = temp;

	int** ppa = &pa;
	int** ppb = &pb;

	// 변수 pa와 pb 만을 사용해서 (temp변수 이용)
	//**ppa 가 b의 값을 **ppb가 a의 값을 출력하게 해보세요...

	printf("**ppa = %d\n", **ppa);
	printf("**ppb = %d\n", **ppb);

	return 0;
}
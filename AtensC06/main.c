#include <stdio.h>

int main() {
	// 0 ~ 100 저장하세요.
	int a0 = 0;
	int a1 = 1, a2 = 2, a3 = 3, a4 = 4;//....

	if (a0 % 2 == 0) {
		printf("a0 = %d\n", a0);
	}

	if (a1 % 2 == 0) {
		printf("a1 = %d\n", a1);
	}

	// 동일한 데이타 타입의 공간이 여러개 필요할때
	// 사용하는 기능이 있습니다.
	// 배열 (array)

	int array[101];


	for (int i = 0; i < 101; i++) {
		array[i] = i;
	}

	for (int i = 0; i < 101; i++) {
		if (array[i] % 2 == 0) {
			printf("array[%d] = %d\n", i, array[i]);
		}
	}

	int a;   // 변수를 선언과 동시에 정의

	a = 20;

	// 변수는 할당된 메모리공간의 위치값인 메모리주소값을 가지고 있습니다.
	// C/C++ 언어에는 메모리공간의 주소값을 저장하는 DataType을 가지고 있습니다. 
	// 이것을 포인터형이라고 합니다.

	printf("&a = %p\n", &a);

	int* pa;   // 변수를 만들때 사용한 *를 포인터형지정자
	pa = &a;

	int** ppa;
	ppa = &pa;

	int*** pppa;
	pppa = &ppa;

	***pppa;   // 주소값앞에 붙이는 *를 포인터 연산자
	***&ppa;
	**ppa;
	**&pa;
	*pa;
	*&a;
	a;

	printf("&***pppa = %p, &***&ppa = %p, &**ppa = %p, &**&pa = %p, &*pa = %p, &*&a = %p, &a = %p\n"
		, &***pppa, &***&ppa, &**ppa, &**&pa, &*pa, &*&a, &a);

	printf("***pppa = %d, ***&ppa = %d, **ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a = %d\n"
		, ***pppa, ***&ppa, **ppa, **&pa, *pa, *&a, a);

	***pppa = 1000;
	printf("***pppa = %d, ***&ppa = %d, **ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a = %d\n"
		, ***pppa, ***&ppa, **ppa, **&pa, *pa, *&a, a);

	return 0;
}
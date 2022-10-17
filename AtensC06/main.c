#include <stdio.h>

int main() {
	// 0 ~ 100 �����ϼ���.
	int a0 = 0;
	int a1 = 1, a2 = 2, a3 = 3, a4 = 4;//....

	if (a0 % 2 == 0) {
		printf("a0 = %d\n", a0);
	}

	if (a1 % 2 == 0) {
		printf("a1 = %d\n", a1);
	}

	// ������ ����Ÿ Ÿ���� ������ ������ �ʿ��Ҷ�
	// ����ϴ� ����� �ֽ��ϴ�.
	// �迭 (array)

	int array[101];


	for (int i = 0; i < 101; i++) {
		array[i] = i;
	}

	for (int i = 0; i < 101; i++) {
		if (array[i] % 2 == 0) {
			printf("array[%d] = %d\n", i, array[i]);
		}
	}

	int a;   // ������ ����� ���ÿ� ����

	a = 20;

	// ������ �Ҵ�� �޸𸮰����� ��ġ���� �޸��ּҰ��� ������ �ֽ��ϴ�.
	// C/C++ ���� �޸𸮰����� �ּҰ��� �����ϴ� DataType�� ������ �ֽ��ϴ�. 
	// �̰��� ���������̶�� �մϴ�.

	printf("&a = %p\n", &a);

	int* pa;   // ������ ���鶧 ����� *�� ��������������
	pa = &a;

	int** ppa;
	ppa = &pa;

	int*** pppa;
	pppa = &ppa;

	***pppa;   // �ּҰ��տ� ���̴� *�� ������ ������
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
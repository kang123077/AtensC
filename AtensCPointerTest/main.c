#include <stdio.h>

int main() {
	int a;
	a = 10;

	int b;
	b = 20;

	int* pa = &a;   // ��������������
	int* pb = &b;

	// int* temp = pa;
	// pa = pb;
	// pb = temp;

	int** ppa = &pa;
	int** ppb = &pb;

	// ���� pa�� pb ���� ����ؼ� (temp���� �̿�)
	// **ppa �� b�� ���� **ppb�� a�� ���� ����ϰ� �� ������...

	printf("**ppa = %d\n", **ppa);
	printf("**ppb = %d\n", **ppb);

	// ���� ppa�� ppb���� ����ؼ�
	// **ppa�� b�� ���� **ppb�� a�� ���� ����ϰ� �� ������...

	int** temp = ppa;
	ppa = ppb;
	ppb = temp;

	printf("**ppa = %d\n", **ppa);
	printf("**ppb = %d\n", **ppb);

	return 0;
}
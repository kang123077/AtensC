#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// �� �ڽ��� ���ƴ��� Ȯ���ϴ� ������ ����� ������

int main() {
	//ù��° �ڽ� ��ǥ 4��
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	//�ι��� �ڽ� ��ǥ 4��
	int x3 = 0;
	int y3 = 0;
	int x4 = 0;
	int y4 = 0;
	//��ħ ����
	int temp = 0;

	printf("ù��° �ڽ��� ���� ��ǥ���� �Է��ϼ��� (x, y) : ");
	scanf("%d, %d", &x1, &y1);
	printf("ù��° �ڽ��� �� ��ǥ���� �Է��ϼ��� (x, y) : ");
	scanf("%d, %d", &x2, &y2);

	printf("�ι�° �ڽ��� ���� ��ǥ���� �Է��ϼ��� (x, y) : ");
	scanf("%d, %d", &x3, &y3);
	printf("�ι�° �ڽ��� �� ��ǥ���� �Է��ϼ��� (x, y) : ");
	scanf("%d, %d", &x4, &y4);

	return 0;
}
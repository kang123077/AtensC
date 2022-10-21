#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) {
	int temp = 0;

	temp = a + b;

	return temp;
}

void SwapValue(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void PSwapValue(int* pa, int* pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

// �Լ��� ȣ���� �� ���ڸ� �����ϴ� ���
// Call by Value (���� ���� ȣ��)
// Call by Address (�ּҰ��� ���� ȣ��)

void PrintArray(const int parray[], int size) {
	for (int i = 0; i < size; i++) {
		printf("parray[%d] = %d\n", i, parray[i]);
	}

	//parray[0] = 100;   
}

struct Student {
	char name[30];
	int age;
	int grade;
	int classNum;
};

void PrintStudent(struct Student array[], int size) {
	for (int i = 0; i < size; i++) {
		printf("name : %s, age : %d, grade : %d, classNum : %d\n",
			array[i].name, array[i].age, array[i].grade, array[i].classNum);
	}
	printf("\n");
}

void ModifyStudentArray(struct Student* parray) {
	char buff[100];
	printf("�̸��� �Է��ϼ���: ");
	scanf("%s", parray->name);
	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &parray->age);
	printf("�г���  �Է��ϼ���: ");
	scanf("%d", &parray->grade);
	printf("���� �Է��ϼ���: ");
	scanf("%d", &parray->classNum);
}

int main() {
	int a = 20;
	int b = 30;

	int ret = add(a, b);

	printf("before SwapValue() a = %d, b = %d\n", a, b);
	SwapValue(a, b);
	printf("after SwapValue() a = %d, b = %d\n", a, b);

	printf("befor PSwapValue() a = %d, b = %d\n", a, b);
	PSwapValue(&a, &b);
	printf("befor PSwapValue() a = %d, b = %d\n", a, b);

	// �迭�� �Լ��� ���ڷ� �����Ҷ�
	// �迭�� ���� ���� �����ؼ� �����ϰ� �Ǹ� 
	// ū ������뷮�� ���簡 �Ǽ� ȿ������ �������� �ȴ�.
	// �ּҷ� �����ϴ� ���� �����ϴ�.
	// �ּҷ� �������� ��쿡�� ȣ��� �Լ����� ���ڷ� ���޵�
	// �ּҰ����� �ش� ������ �����ؼ� ���� ������ ���輺�� �ִ�.
	// �� �κ��� ���� ���ؼ� const��� Ű���带 ����ϸ� �ȴ�.

	int array[100];

	for (int i = 0; i < 100; i++) {
		array[i] = i;
	}

	PrintArray(array, 100);

	struct Student arrayS[]
		= {
		   {"monster0", 10, 1, 11}
		   , {"monster2", 11, 2, 7}
		   , {"monster3", 10, 2, 7}
		   , {"monster4", 9, 1, 11}
		   , {"monster5", 10,2, 10}
	};

	PrintStudent(arrayS, 5);

	// struct student �迭�� �ֽ��ϴ�
	// �ش� �迭�� ���ڷ� ���� �޾Ƽ�
	// �迭�� ���� ����ϴ� �Լ��� ����� ������..

	int isModify = 0;
	int modifyNum = 0;
	while (1) {
		printf("�����Ͻðڽ��ϱ�?(0: ��������, 1: ������) ");
		scanf("%d", &isModify);

		if (isModify != 1) {
			break;
		}

		printf("���° �л��� �����Ͻðڽ��ϱ�? (0 ~ 4) ");
		scanf("%d", &modifyNum);

		if (modifyNum < 0 || modifyNum > 4) {   // ���� ���� �ʰ�
			break;
		}

		ModifyStudentArray(&arrayS[modifyNum]);

		PrintStudent(arrayS, 5);
	}

	return 0;
}
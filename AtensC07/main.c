#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// ������ datatype�� ������ ���� �� �ʿ��� �� �迭 ���
	// �ּҰ��� + 1�� �����ͻ����ŭ �޸𸮰������� �̵�
	int array[10];

	printf("array = %d\n", array);
	printf("array + 1 = %d\n", array + 1);

	double array2[10];

	printf("array2 = %d\n", array2);
	printf("array2 + 1 = %d\n", array2 + 1);

	for (int i = 0; i < 10; i++) {
		*(array + i) = i; // �����ͽ�
		// array[i] = i; �迭��
	}

	for (int i = 0; i < 10; i++) {
		printf("*(array + %d) = %d\n", i, *(array + i));
	}

	int* parray = array;

	for (int i = 0; i < 10; i++) {
		printf("*parray = %d\n", *parray++);
	}

	// �л� ������ ���α׷��� ����ٰ� ���ô�.

	int No; // �й�
	int Grade; // �г�
	int ClassNum; // �� ��ȣ
	float Score; // ����

	// 100���� �л��� ������ ������ �� ����

	int NoAraay[100]; // �й�
	int GradeAraay[100]; // �г�
	int ClassNumAraay[100]; // �� ��ȣ
	float ScoreAraay[100]; // ����

	//for (int i = 0; i < 100; i++) {
	//	NoAraay[i] = i;
	//	GradeAraay[i] = i;
	//	ClassNumAraay[i] = i;
	//	ScoreAraay[i] = i;
	//}

	struct Student { // ����� ���� ������ Ÿ��
		int No; // ����ü ���
		int Grade;
		int ClassNum;
		float Score;
	};

	struct Student a; // ����ü ����

	a.No = 123123;
	a.Grade = 3;
	a.ClassNum = 11;
	a.Score = 80.0f;

	printf("a.No = %d, a.Grade = %d, a.ClassNum = %d, a.Score = %f",
		a.No, a.Grade, a.ClassNum, a.Score);

	// ���� ���� ���α׷�

	typedef struct tagStock {
		int type; // 0�� ����, 1�� ��, 2�� ��
		float age; // ����
		float height; // ����
		float weight; // ������
		float helthRate; // �ǰ�����
	} Stock;

	// typedef struct tagStock Stock;
	// �� ������ ���
	// typedef int Word;
	// Word a;

	Stock array3[3]; // ����ü �迭


	for (int i = 0; i < 3; i++) {
		printf("���� ������ �Է��ϼ��� :\n");
		printf("���� ������ �Է��ϼ���(0: ����, 1: ��, 2: ��) : ");
		scanf("%f", &array3[i].type);
		printf("���̸� �Է��ϼ���: ");
		scanf("%f", &array3[i].age);
		printf("������ �Է��ϼ���: ");
		scanf("%f", &array3[i].height);
		printf("�����Ը� �Է��ϼ���: ");
		scanf("%f", &array3[i].weight);
		printf("�ǰ� ������ �Է��ϼ���: ");
		scanf("%f", &array3[i].helthRate);
	}

	for (int i = 0; i < 3; i++) {
		switch (array3[i].type) {
		case 0:
			printf("��������: ����\n");
			break;

		case 1:
			printf("��������: ��\n");
			break;

		case 2:
			printf("��������: ��\n");
			break;

		default:
			printf("��������: �̻�\n");
		}

		printf("���� : %f\n", array3[i].age);
		printf("���� : %f\n", array3[i].height);
		printf("���� : %f\n", array3[i].weight);
		printf("�ǰ� : %f\n", array3[i].helthRate);
	}

	return 0;
}
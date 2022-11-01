//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <windows.h>
//
//typedef struct tagStudent {
//    int age;
//    int grade;
//    char* name;
//} Student;
//
//
//int main() {
//    int count = 0;
//    char buff[50];
//
//    printf("�Է��Ͻ� �л����� �Է��ϼ���: ");
//    scanf("%d", &count);
//
//
//    Student** parray = (Student**)malloc(sizeof(Student*) * count);   // student������ �ּҰ� ���� ���� �迭 ����(�����͹迭����)
//
//    for (int i = 0; i < count; i++) {
//        parray[i] = (Student*)malloc(sizeof(Student));   // Student�������� ����
//
//        printf("�̸��� �Է��ϼ���: ");
//        scanf("%s", buff);
//        int length = strlen(buff);
//        parray[i]->name = (char*)malloc(sizeof(char) * length + 1);   // �̸� ���� ���� ���� �迭 ����
//
//        strcpy(parray[i]->name, buff);
//
//        printf("���̸� �Է��ϼ���: ");
//        scanf("%d", &parray[i]->age);
//
//        printf("�г��� �Է��ϼ���: ");
//        scanf("%d", &parray[i]->grade);
//        printf("\n");
//    }
//
//    printf("\n�Է��� �� ���\n");
//    for (int i = 0; i < count; i++) {
//        printf("�̸�: %s, ����: %d, �г�: %d\n", parray[i]->name, parray[i]->age, parray[i]->grade);
//    }
//
//    for (int i = 0; i < count; i++) {
//        free(parray[i]->name); // �̸� ������� �ݳ�
//        free(parray[i]);// student ������� �ݳ�
//    }
//
//    free(parray);   // student���������� �ּҰ� ������� �ݳ�
//
//
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <windows.h>
//
//
//typedef struct tagStudent {
//    int age;
//    int grade;
//    char name[30];
//
//    struct tagStudent* NextNode;   // ���� ��������� �ּҰ��� ����
//} Student;
//
//int main() {
//    Student InputValue;
//    Student* headNode = NULL;
//
//    while (1) {
//        printf("�л��� �̸� ���� �г������ �Է��ϼ���(��, monster 12 3)(exit): ");
//        scanf("%s%d%d", InputValue.name, &InputValue.age, &InputValue.grade);
//
//        if (strcmp(InputValue.name, "exit") == 0) break; // �л��̸��� exit�� �Է��ϸ� �Է� �ߴ�.
//
//        if (headNode == NULL) {   // ó�� �Էµ� �л�����̸�(������̸�)
//            headNode = (Student*)malloc(sizeof(Student));
//
//            headNode->NextNode = NULL;
//            strcpy(headNode->name, InputValue.name);
//            headNode->age = InputValue.age;
//            headNode->grade = InputValue.grade;
//        }
//        else {
//            Student* CurrentNode = headNode;
//
//            while (CurrentNode->NextNode != NULL) {   // ��������̸�
//                CurrentNode = CurrentNode->NextNode;
//            }
//
//            CurrentNode->NextNode = (Student*)malloc(sizeof(Student));
//            CurrentNode->NextNode->NextNode = NULL;
//            strcpy(CurrentNode->NextNode->name, InputValue.name);
//            CurrentNode->NextNode->age = InputValue.age;
//            CurrentNode->NextNode->grade = InputValue.grade;
//        }
//    }
//
//    // �Էµ� ���� ���
//    Student* Current = headNode;
//    while (Current != NULL)
//    {
//        printf("�̸�: %s, ����: %d, �г�: %d\n", Current->name, Current->age, Current->grade);
//
//        Current = Current->NextNode;
//    }
//
//    // �������� �ݳ�
//    Student* Current = headNode;
//    while (Current != NULL)
//    {
//        headNode = Current->NextNode;
//        free(Current);
//        Current = headNode;
//    }
//
//    return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


// ���� 2���� �迭
int main() {
	int column = 0;
	int row = 0;
	int** pparray = NULL;


	printf("������ �迭�� ��� ���� �Է��ϼ���:(�� ��) ");
	scanf("%d%d", &column, &row);


	pparray = (int**)malloc(sizeof(int*) * column);   // �����͹迭 ���� ����

	for (int i = 0; i < column; i++)
	{
		pparray[i] = (int*)malloc(sizeof(int) * row); // ������ �迭�� ���� int �迭�� �ּҰ��� ����
	}

	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			pparray[i][j] = i * row + j;
		}
	}

	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			printf("pparray[%d][%d] = %d\n", i, j, pparray[i][j]);
		}
	}

	// �޸� �ݳ�
	for (int i = 0; i < column; i++) {
		free(pparray[i]);   // int�� ���� �迭�� �ݳ�
	}

	free(pparray);   // int* �ּҰ� ���� �迭 �ݳ�

	return 0;
}
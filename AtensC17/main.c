#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

typedef struct tagStudent {
	int age;
	int grade;
	char* name;
} Student;

int main() {
	//int inputCount = 0;
	//char name[50];

	//printf("����� �л��� �Է��Ͻðڽ��ϱ�: ");
	//scanf("%d", &inputCount);

	//Student* parray = (Student*)malloc(sizeof(Student) * inputCount);

	//for (int i = 0; i < inputCount; i++) {
	//    printf("%d ��° �л��� ���̸� �Է��ϼ���: ", i + 1);
	//    scanf("%d", &parray[i].age);

	//    printf("%d ��° �л��� �г��� �Է��ϼ���: ", i + 1);
	//    scanf("%d", &parray[i].grade);

	//    printf("%d ��° �л��� �̸��� �Է��ϼ���: ", i + 1);
	//    scanf("%s", name);

	//    int length = strlen(name);   // �Է¹��� �̸� ���ڿ��� ����

	//    // �Է¹��� �̸��� ������ ���� �޸𸮸� �Ҵ��Ѵ�.
	//    parray[i].name = (char*)malloc(sizeof(char) * length + 1);

	//    strcpy(parray[i].name, name); // �Ҵ�� �����޸𸮿� �Է¹��� �̸����ڿ��� �����Ѵ�.   

	//    system("cls");
	//}

	//for (int i = 0; i < inputCount; i++) {
	//    printf("�̸�: %s, ����: %d, �г�: %d\n", parray[i].name, parray[i].age, parray[i].grade);
	//}

	//// �����޸� �Ҵ� ����

	//// ������ �̸��� �����ϱ� ���ؼ� �Ҵ�� �����޸� ����
	//for (int i = 0; i < inputCount; i++) {
	//    free(parray[i].name);
	//}

	//// �л� �����迭 ����
	//free(parray);

	char fruits[][11] = { "banana", "apples", "strawberry", "kiwi", "mango" };
	char* pfruits[] = { "banana", "apples", "strawberry", "kiwi", "mango" };

	printf("char�� 2���� �迭\n");
	for (int i = 0; i < sizeof(fruits) / 11; i++) {
		printf("%s\n", fruits[i]);
	}


	printf("\nchar�� ������ �迭\n");
	for (int i = 0; i < sizeof(pfruits) / sizeof(char*); i++) {
		printf("%s\n", pfruits[i]);
	}

	return 0;
}
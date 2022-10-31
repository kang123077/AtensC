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

	//printf("몇명의 학생을 입력하시겠습니까: ");
	//scanf("%d", &inputCount);

	//Student* parray = (Student*)malloc(sizeof(Student) * inputCount);

	//for (int i = 0; i < inputCount; i++) {
	//    printf("%d 번째 학생의 나이를 입력하세요: ", i + 1);
	//    scanf("%d", &parray[i].age);

	//    printf("%d 번째 학생의 학년을 입력하세요: ", i + 1);
	//    scanf("%d", &parray[i].grade);

	//    printf("%d 번째 학생의 이름을 입력하세요: ", i + 1);
	//    scanf("%s", name);

	//    int length = strlen(name);   // 입력받은 이름 문자열의 길이

	//    // 입력받은 이름을 저장할 동적 메모리를 할당한다.
	//    parray[i].name = (char*)malloc(sizeof(char) * length + 1);

	//    strcpy(parray[i].name, name); // 할당된 동적메모리에 입력받은 이름문자열을 복사한다.   

	//    system("cls");
	//}

	//for (int i = 0; i < inputCount; i++) {
	//    printf("이름: %s, 나이: %d, 학년: %d\n", parray[i].name, parray[i].age, parray[i].grade);
	//}

	//// 동적메모리 할당 해제

	//// 각각의 이름을 저장하기 위해서 할당된 동적메모리 해제
	//for (int i = 0; i < inputCount; i++) {
	//    free(parray[i].name);
	//}

	//// 학생 동적배열 해제
	//free(parray);

	char fruits[][11] = { "banana", "apples", "strawberry", "kiwi", "mango" };
	char* pfruits[] = { "banana", "apples", "strawberry", "kiwi", "mango" };

	printf("char형 2차원 배열\n");
	for (int i = 0; i < sizeof(fruits) / 11; i++) {
		printf("%s\n", fruits[i]);
	}


	printf("\nchar형 포인터 배열\n");
	for (int i = 0; i < sizeof(pfruits) / sizeof(char*); i++) {
		printf("%s\n", pfruits[i]);
	}

	return 0;
}
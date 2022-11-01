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
//    printf("입력하실 학생수를 입력하세요: ");
//    scanf("%d", &count);
//
//
//    Student** parray = (Student**)malloc(sizeof(Student*) * count);   // student변수의 주소값 저장 동적 배열 생성(포인터배열생성)
//
//    for (int i = 0; i < count; i++) {
//        parray[i] = (Student*)malloc(sizeof(Student));   // Student동적변수 생성
//
//        printf("이름을 입력하세요: ");
//        scanf("%s", buff);
//        int length = strlen(buff);
//        parray[i]->name = (char*)malloc(sizeof(char) * length + 1);   // 이름 저장 공간 동적 배열 생성
//
//        strcpy(parray[i]->name, buff);
//
//        printf("나이를 입력하세요: ");
//        scanf("%d", &parray[i]->age);
//
//        printf("학년을 입력하세요: ");
//        scanf("%d", &parray[i]->grade);
//        printf("\n");
//    }
//
//    printf("\n입력한 값 출력\n");
//    for (int i = 0; i < count; i++) {
//        printf("이름: %s, 나이: %d, 학년: %d\n", parray[i]->name, parray[i]->age, parray[i]->grade);
//    }
//
//    for (int i = 0; i < count; i++) {
//        free(parray[i]->name); // 이름 저장공간 반납
//        free(parray[i]);// student 저장공간 반납
//    }
//
//    free(parray);   // student동적변수의 주소값 저장공간 반납
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
//    struct tagStudent* NextNode;   // 다음 저장공간의 주소값을 저장
//} Student;
//
//int main() {
//    Student InputValue;
//    Student* headNode = NULL;
//
//    while (1) {
//        printf("학생의 이름 나이 학년순으로 입력하세요(예, monster 12 3)(exit): ");
//        scanf("%s%d%d", InputValue.name, &InputValue.age, &InputValue.grade);
//
//        if (strcmp(InputValue.name, "exit") == 0) break; // 학생이름을 exit로 입력하면 입력 중단.
//
//        if (headNode == NULL) {   // 처음 입력된 학생노드이면(헤드노드이면)
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
//            while (CurrentNode->NextNode != NULL) {   // 꼬리노드이면
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
//    // 입력된 내용 출력
//    Student* Current = headNode;
//    while (Current != NULL)
//    {
//        printf("이름: %s, 나이: %d, 학년: %d\n", Current->name, Current->age, Current->grade);
//
//        Current = Current->NextNode;
//    }
//
//    // 동적변수 반납
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


// 동적 2차원 배열
int main() {
	int column = 0;
	int row = 0;
	int** pparray = NULL;


	printf("이차원 배열의 행과 열을 입력하세요:(행 열) ");
	scanf("%d%d", &column, &row);


	pparray = (int**)malloc(sizeof(int*) * column);   // 포인터배열 동적 생성

	for (int i = 0; i < column; i++)
	{
		pparray[i] = (int*)malloc(sizeof(int) * row); // 포인터 배열에 동적 int 배열의 주소값을 저장
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

	// 메모리 반납
	for (int i = 0; i < column; i++) {
		free(pparray[i]);   // int값 저장 배열을 반납
	}

	free(pparray);   // int* 주소값 저장 배열 반납

	return 0;
}
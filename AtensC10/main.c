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

// 함수를 호출할 때 인자를 전달하는 방식
// Call by Value (값에 의한 호출)
// Call by Address (주소값에 의한 호출)

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
	printf("이름을 입력하세요: ");
	scanf("%s", parray->name);
	printf("나이를 입력하세요: ");
	scanf("%d", &parray->age);
	printf("학년을  입력하세요: ");
	scanf("%d", &parray->grade);
	printf("반을 입력하세요: ");
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

	// 배열을 함수의 인자로 전달할때
	// 배열의 값을 전부 복사해서 전달하게 되면 
	// 큰 사이즈용량이 복사가 되서 효율성이 떨어지게 된다.
	// 주소로 전달하는 것이 유리하다.
	// 주소로 전달했을 경우에는 호출된 함수에서 인자로 전달된
	// 주소값으로 해당 공간에 접근해서 값을 변경할 위험성이 있다.
	// 이 부분을 막기 위해서 const라는 키워드를 사용하면 된다.

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

	// struct student 배열이 있습니다
	// 해당 배열을 인자로 전달 받아서
	// 배열의 값을 출력하는 함수를 만들어 보세요..

	int isModify = 0;
	int modifyNum = 0;
	while (1) {
		printf("수정하시겠습니까?(0: 하지않음, 1: 수정함) ");
		scanf("%d", &isModify);

		if (isModify != 1) {
			break;
		}

		printf("몇번째 학생을 수정하시겠습니까? (0 ~ 4) ");
		scanf("%d", &modifyNum);

		if (modifyNum < 0 || modifyNum > 4) {   // 수정 범위 초과
			break;
		}

		ModifyStudentArray(&arrayS[modifyNum]);

		PrintStudent(arrayS, 5);
	}

	return 0;
}
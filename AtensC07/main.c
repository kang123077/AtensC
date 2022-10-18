#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 동일한 datatype의 공간이 여러 개 필요할 때 배열 사용
	// 주소값에 + 1시 데이터사이즈만큼 메모리공간에서 이동
	int array[10];

	printf("array = %d\n", array);
	printf("array + 1 = %d\n", array + 1);

	double array2[10];

	printf("array2 = %d\n", array2);
	printf("array2 + 1 = %d\n", array2 + 1);

	for (int i = 0; i < 10; i++) {
		*(array + i) = i; // 포인터식
		// array[i] = i; 배열식
	}

	for (int i = 0; i < 10; i++) {
		printf("*(array + %d) = %d\n", i, *(array + i));
	}

	int* parray = array;

	for (int i = 0; i < 10; i++) {
		printf("*parray = %d\n", *parray++);
	}

	// 학생 관리용 프로그램을 만든다고 봅시다.

	int No; // 학번
	int Grade; // 학년
	int ClassNum; // 반 번호
	float Score; // 성적

	// 100명의 학생을 일일히 지정할 수 없다

	int NoAraay[100]; // 학번
	int GradeAraay[100]; // 학년
	int ClassNumAraay[100]; // 반 번호
	float ScoreAraay[100]; // 성적

	//for (int i = 0; i < 100; i++) {
	//	NoAraay[i] = i;
	//	GradeAraay[i] = i;
	//	ClassNumAraay[i] = i;
	//	ScoreAraay[i] = i;
	//}

	struct Student { // 사용자 정의 데이터 타입
		int No; // 구조체 멤버
		int Grade;
		int ClassNum;
		float Score;
	};

	struct Student a; // 구조체 변수

	a.No = 123123;
	a.Grade = 3;
	a.ClassNum = 11;
	a.Score = 80.0f;

	printf("a.No = %d, a.Grade = %d, a.ClassNum = %d, a.Score = %f",
		a.No, a.Grade, a.ClassNum, a.Score);

	// 농장 관리 프로그램

	typedef struct tagStock {
		int type; // 0번 돼지, 1번 소, 2번 닭
		float age; // 나이
		float height; // 신장
		float weight; // 몸무게
		float helthRate; // 건강지수
	} Stock;

	// typedef struct tagStock Stock;
	// 형 재정의 명령
	// typedef int Word;
	// Word a;

	Stock array3[3]; // 구조체 배열


	for (int i = 0; i < 3; i++) {
		printf("가축 정보를 입력하세요 :\n");
		printf("가축 종류를 입력하세요(0: 돼지, 1: 소, 2: 닭) : ");
		scanf("%f", &array3[i].type);
		printf("나이를 입력하세요: ");
		scanf("%f", &array3[i].age);
		printf("신장을 입력하세요: ");
		scanf("%f", &array3[i].height);
		printf("몸무게를 입력하세요: ");
		scanf("%f", &array3[i].weight);
		printf("건강 지수를 입력하세요: ");
		scanf("%f", &array3[i].helthRate);
	}

	for (int i = 0; i < 3; i++) {
		switch (array3[i].type) {
		case 0:
			printf("가축종류: 돼지\n");
			break;

		case 1:
			printf("가축종류: 소\n");
			break;

		case 2:
			printf("가축종류: 닭\n");
			break;

		default:
			printf("가축종류: 미상\n");
		}

		printf("나이 : %f\n", array3[i].age);
		printf("신장 : %f\n", array3[i].height);
		printf("무게 : %f\n", array3[i].weight);
		printf("건강 : %f\n", array3[i].helthRate);
	}

	return 0;
}
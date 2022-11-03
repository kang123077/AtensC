//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//// 파일 입출력
//
//int main() {
//	FILE* fp;
//	int isRead = 0;
//
//	printf("읽기: 1, 쓰기: 0 : ");
//	scanf("%d", &isRead);
//
//	if (!isRead) {
//		// 파일열기 요청
//		fp = fopen("test.txt", "w"); // w: 쓰기모드, a: 추가모드, r: 읽기모드
//
//		if (fp == NULL) {
//			printf("파일열기실패\n");
//			return;
//		}
//		else {
//			printf("파일열기성공\n");
//		}
//
//		fputc('a', fp);
//
//		fputc('\n', fp);
//		for (char i = 'A'; i <= 'Z'; i++) {
//			fputc(i, fp);
//		}
//
//		fputc('\n', fp);
//
//		fputc('x', fp);
//
//		fclose(fp);   // 파일닫기 요청
//
//	}
//	else {
//		fp = fopen("test.txt", "r");   // 읽기모드로 오픈
//		char read = 0;
//
//		if (fp == NULL) {
//			printf("파일 열기 실패\n");
//
//			return;
//		}
//		else {
//			printf("파일 읽기모드 열기 성공\n");
//		}
//
//		// fgetc 파일에서 한문자 읽기
//		while ((read = fgetc(fp)) != EOF) {   // EOF : End Of File
//			putchar(read);
//		}
//
//		fclose(fp);   // 파일닫기 요청
//
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <memory.h>
//
//// 문자열 단위 입출력
//int main() {
//	int isRead = 0;
//	FILE* fp = NULL;
//	char file_buff[100];
//
//
//	printf("읽기: 1 , 쓰기: 0 => ");
//	scanf("%d", &isRead);
//
//	if (!isRead) { // 쓰기
//		fp = fopen("test_line.txt", "w");   // 쓰기모드로 파일 오픈
//
//		if (fp == NULL) {
//			printf("파일 오픈 실패\n");
//			return 0;
//		}
//
//		int i;
//
//		for (i = 0; i <= 5; i++) {
//			printf("파일에 쓸 내용을 입력하세요(%d번째라인): ", i);
//			memset(file_buff, 0, sizeof(file_buff));
//			scanf("%s", file_buff);
//
//			file_buff[strlen(file_buff)] = '\n';
//
//			// 파일에 문자열 쓰기 함수
//			fputs(file_buff, fp);
//		}
//
//		fclose(fp);
//	}
//	else {   // 읽기
//
//		fp = fopen("test_line.txt", "r");
//
//		if (fp == NULL) {
//			printf("파일 열기 실패\n");
//
//			return 0;
//		}
//
//		// fgets :파일에서 문자열 읽는 함수
//		while (fgets(file_buff, sizeof(file_buff), fp) != NULL) {
//			printf("%s", file_buff);
//			memset(file_buff, 0, sizeof(file_buff));
//		}
//
//		fclose(fp);
//
//	}
//
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct tagStudent {
	char name[20];
	int age;
	double height;
} Student;


// 타입지정 입출력
int main() {
	int isRead = 0;
	Student inputValue = { "", 0, 0.0 };
	Student stArray[5];

	FILE* fp = NULL;

	printf("읽기: 1, 쓰기: 0 => ");
	scanf("%d", &isRead);

	if (!isRead) {
		if ((fp = fopen("user_info.txt", "w")) == NULL) {
			printf("파일 열기 실패");

			return 0;
		}

		int i;
		for (i = 0; i < 5; i++) {
			printf("%d번째 유저정보를 입력하세요.(나이 이름 키)순 :", i + 1);
			scanf("%s%d%lf", inputValue.name, &inputValue.age, &inputValue.height);
			fprintf(fp, "%s %d %lf\n", inputValue.name, inputValue.age, inputValue.height);
		}

		fclose(fp);

	}
	else {


		if ((fp = fopen("user_info.txt", "r")) == NULL) {
			printf("파일 열기 실패");

			return 0;
		}

		for (int i = 0; i < 5; i++) {
			fscanf(fp, "%s %d %lf", stArray[i].name, &stArray[i].age, &stArray[i].height);
		}

		for (int i = 0; i < 5; i++) {
			printf("이름: %s, 나이: %d, 신장: %lf\n", stArray[i].name, stArray[i].age, stArray[i].height);
		}

		fclose(fp);
	}



	return 0;
}
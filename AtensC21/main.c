//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//// ���� �����
//
//int main() {
//	FILE* fp;
//	int isRead = 0;
//
//	printf("�б�: 1, ����: 0 : ");
//	scanf("%d", &isRead);
//
//	if (!isRead) {
//		// ���Ͽ��� ��û
//		fp = fopen("test.txt", "w"); // w: ������, a: �߰����, r: �б���
//
//		if (fp == NULL) {
//			printf("���Ͽ������\n");
//			return;
//		}
//		else {
//			printf("���Ͽ��⼺��\n");
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
//		fclose(fp);   // ���ϴݱ� ��û
//
//	}
//	else {
//		fp = fopen("test.txt", "r");   // �б���� ����
//		char read = 0;
//
//		if (fp == NULL) {
//			printf("���� ���� ����\n");
//
//			return;
//		}
//		else {
//			printf("���� �б��� ���� ����\n");
//		}
//
//		// fgetc ���Ͽ��� �ѹ��� �б�
//		while ((read = fgetc(fp)) != EOF) {   // EOF : End Of File
//			putchar(read);
//		}
//
//		fclose(fp);   // ���ϴݱ� ��û
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
//// ���ڿ� ���� �����
//int main() {
//	int isRead = 0;
//	FILE* fp = NULL;
//	char file_buff[100];
//
//
//	printf("�б�: 1 , ����: 0 => ");
//	scanf("%d", &isRead);
//
//	if (!isRead) { // ����
//		fp = fopen("test_line.txt", "w");   // ������� ���� ����
//
//		if (fp == NULL) {
//			printf("���� ���� ����\n");
//			return 0;
//		}
//
//		int i;
//
//		for (i = 0; i <= 5; i++) {
//			printf("���Ͽ� �� ������ �Է��ϼ���(%d��°����): ", i);
//			memset(file_buff, 0, sizeof(file_buff));
//			scanf("%s", file_buff);
//
//			file_buff[strlen(file_buff)] = '\n';
//
//			// ���Ͽ� ���ڿ� ���� �Լ�
//			fputs(file_buff, fp);
//		}
//
//		fclose(fp);
//	}
//	else {   // �б�
//
//		fp = fopen("test_line.txt", "r");
//
//		if (fp == NULL) {
//			printf("���� ���� ����\n");
//
//			return 0;
//		}
//
//		// fgets :���Ͽ��� ���ڿ� �д� �Լ�
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


// Ÿ������ �����
int main() {
	int isRead = 0;
	Student inputValue = { "", 0, 0.0 };
	Student stArray[5];

	FILE* fp = NULL;

	printf("�б�: 1, ����: 0 => ");
	scanf("%d", &isRead);

	if (!isRead) {
		if ((fp = fopen("user_info.txt", "w")) == NULL) {
			printf("���� ���� ����");

			return 0;
		}

		int i;
		for (i = 0; i < 5; i++) {
			printf("%d��° ���������� �Է��ϼ���.(���� �̸� Ű)�� :", i + 1);
			scanf("%s%d%lf", inputValue.name, &inputValue.age, &inputValue.height);
			fprintf(fp, "%s %d %lf\n", inputValue.name, inputValue.age, inputValue.height);
		}

		fclose(fp);

	}
	else {


		if ((fp = fopen("user_info.txt", "r")) == NULL) {
			printf("���� ���� ����");

			return 0;
		}

		for (int i = 0; i < 5; i++) {
			fscanf(fp, "%s %d %lf", stArray[i].name, &stArray[i].age, &stArray[i].height);
		}

		for (int i = 0; i < 5; i++) {
			printf("�̸�: %s, ����: %d, ����: %lf\n", stArray[i].name, stArray[i].age, stArray[i].height);
		}

		fclose(fp);
	}



	return 0;
}
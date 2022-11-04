//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//// ���̳ʸ��� ���� �����
//
//int main() {
//	int buff[] = { 10, 20, 30, 40, 50 };
//	int outBuff[5];
//
//	FILE* fp = NULL;
//	int size = 0;
//	int count = 0;
//
//	int isRead = 0;
//
//	size = sizeof(int);
//	count = sizeof(buff) / sizeof(int);
//
//	printf("�б�: 1, ����: 0 => ");
//	scanf("%d", &isRead);
//
//	if (!isRead) {
//		fp = fopen("binary.bin", "wb");   // wb: binary write
//
//		if (fp == NULL) {
//			printf("���� ���� ����");
//
//			return;
//		}
//
//		for (int i = 0; i < count; i++) {
//			fwrite(&buff[i], size, 1, fp);   // ���̳ʸ��� ������ �����ϴ� �Լ�
//		}
//
//		//fwrite(buff, size, count, fp);
//
//		fclose(fp);
//
//
//	}
//	else {
//		fp = fopen("binary.bin", "rb");
//
//		if (fp == NULL) {
//			printf("���� ���� ����");
//
//			return 0;
//		}
//
//		for (int i = 0; i < count; i++) {
//			fread(&outBuff[i], size, 1, fp);
//		}
//
//		//fwrite(outBuff, size, count, fp);
//
//		for (int i = 0; i < count; i++) {
//			printf("outBuff[%d] = %d\n", i, outBuff[i]);
//		}
//
//		fclose(fp);
//	}
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Student {
    char name[20];
    int no;
    int age;
};

int main() {
    FILE* fp = NULL;

    int isRead = 0;

    printf("�б�: 1, ����: 0 => ");
    scanf("%d", &isRead);

    struct Student array[5];   // �Է¿� ����ü �迭


    if (!isRead) {
        fp = fopen("studentbinary.bin", "wb");

        if (fp == NULL) {
            printf("���� ���� ����");
            return 0;
        }

        int length = sizeof(array) / sizeof(struct Student);
        for (int i = 0; i < length; i++) {
            array[i].no = i + 1;

            printf("%d /%d ���� �л� �����Է�\n", i + 1, length);
            printf("�̸��� �Է��ϼ���: ");
            scanf("%s", array[i].name);
            printf("���̸� �Է��ϼ���: ");
            scanf("%d", &array[i].age);
            printf("\n");
        }

        fwrite(array, sizeof(struct Student), length, fp);   // binary�� ���� ����

        fclose(fp);

    }
    else {

        fp = fopen("studentbinary.bin", "rb");

        struct Student readArray[5];   // ���Ͽ��� ���� ����ü ����Ÿ �����

        fread(readArray, sizeof(struct Student), 5, fp);   // binary�� ���� �б�

        for (int i = 0; i < 5; i++) {
            printf("�й�: %d, �̸�: %s, ����: %d\n"
                , readArray[i].no, readArray[i].name, readArray[i].age);
        }

        fclose(fp);
    }


    return 0;
}
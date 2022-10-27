#include <stdio.h>

// ���ڿ��� ���ڰ��� ���� �Լ�
//int StringLength(char* str) 
int stringLength(char str[])
{
	int count = 0;   // ���ڿ� ������ ����
	while (*str != '\0') {   // '\0' �����Ṯ��(���ڿ��� ���� ������)
		count++;
		str++;   // str�� ����� �ּҰ��� �������Ѽ� ���� ��ġ�� ����Ű�� �����.
	}

	return count;
}

// ���ڿ��� �������ִ� �Լ�
// dest�� ���ι��� �ּҰ��� ����
char* stringCopy(char* dest, char* src) {   // 10�� 50��
	char* originptr = dest;   // ���ι��� �ּҰ��� ����صд�.

	while (*src != '\0') {
		*dest = *src;   // src�� �ִ� ���ڸ� dest�� �����Ѵ�.

		dest++;   // dest�� �ּҰ��� �״��� ��ġ���� ����ġ���� �Ѵ�.
		src++;
	}

	*dest = '\0';

	return originptr;   // 
}

// �� ���ڿ� �����Լ� (�����ִ�)
// dest�� ���ι��� �ּҰ��� ����
char* stringConcat(char* dest, char* src) {
	char* originPtr = dest;

	while (*dest) {
		dest++;
	}

	while (*src) {
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return originPtr;
}

// �� ���ڿ� ���Լ�
// �� ���ڿ��� ������ 0;
// Ʋ���� 1, -1;
int stringCompare(char* str1, char* str2) {

	while (*str1) {
		if (*str1 != *str2) {
			if (*str1 > *str2) {
				return 1;
			}
			else {
				return -1;
			}
		}

		str1++;
		str2++;
	}

	if (*str2 == '\0') {
		return 0;
	}
	else {
		return -1;
	}
}
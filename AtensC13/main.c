#include <stdio.h>

// ���ڿ��� ���ڰ��� ���� �Լ�
//int StringLength(char* str) 
int StringLength(char str[])
{
	int i = 0;
	while (str[i]) {
		i++;
	}

	return i;
}

// ���ڿ��� �������ִ� �Լ�
// dest�� ���ι��� �ּҰ��� ����
char* stringcopy(char* dest, char* src) {
	int i = 0;

	while (src[i]) {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return dest;
}

// �� ���ڿ� �����Լ� (�����ִ�)
// dest�� ���ι��� �ּҰ��� ����
char* stringConcat(char* dest, char* src) {
	int i = 0;
	int len = 0;

	while (dest[len]) {
		len++;
	}
	while (src[i]) {
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';

	return dest;
}

// �� ���ڿ� ���Լ�
// �� ���ڿ��� ������ 0;
// Ʋ���� 1, -1;
int stringCompare(char* str1, char* str2) {
	int i = 0;

	while (str1[i] && str2[i]) {
		if (str1[i] != str2[i]) {
			return -1;
		}
		i++;
	}
	if (str1[i] != str2[i]) {
		return -1;
	}

	return 0;
}



int main() {
	char str1[30] = "MONSTER";
	char str2[30];
	char str3[] = " IS WORLD!!";
	char str4[] = "MONSTER";
	char str5[] = "MONS";

	// ���� �Լ��� ȣ���ؼ� ������� ����ϼ���....

	printf("StringLength of str1 = %d\n", StringLength(str1));
	printf("StringLength of str3 = %d\n", StringLength(str3));

	printf("StringCopy of str1 in str2 = %s\n", stringcopy(str2, str1));

	printf("StringCompare str1 & str4 = %d\n", stringCompare(str1, str4));
	printf("StringCompare str1 & str3 = %d\n", stringCompare(str1, str3));
	printf("StringCompare str1 & str5 = %d\n", stringCompare(str1, str5));

	printf("StringConcat str1 & str3 = %s\n", stringConcat(str1, str3));

	return 0;
}
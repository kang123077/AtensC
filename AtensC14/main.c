#include <stdio.h>
#include "mystring.h"

int main() {
	char str1[] = "monster";
	char str2[30] = { 0, 1, 2 };
	char str3[] = "is world";

	// ���� �Լ��� ȣ���ؼ� ������� ����ϼ���

	int count = stringLength(str1);
	printf("���ڿ��� ������ %d\n", stringLength(str1));

	char* retstr = stringCopy(str2, str1);
	printf("str2 = %s\n", retstr);

	return 0;
}
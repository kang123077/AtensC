#include <stdio.h>
#include "mystring.h"

int main() {
	char str1[] = "monster";
	char str2[30] = { 0, 1, 2 };
	char str3[] = "is world";

	// 만든 함수를 호출해서 결과값을 출력하세요

	int count = stringLength(str1);
	printf("문자열의 갯수는 %d\n", stringLength(str1));

	char* retstr = stringCopy(str2, str1);
	printf("str2 = %s\n", retstr);

	return 0;
}
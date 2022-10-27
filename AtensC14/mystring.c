#include <stdio.h>

// 문자열의 문자갯수 세는 함수
//int StringLength(char* str) 
int stringLength(char str[])
{
	int count = 0;   // 문자열 갯수를 저장
	while (*str != '\0') {   // '\0' 널종료문자(문자열의 끝을 구분자)
		count++;
		str++;   // str에 저장된 주소값을 증가시켜서 다음 위치를 가르키게 만든다.
	}

	return count;
}

// 문자열을 복사해주는 함수
// dest의 선두번지 주소값을 리턴
char* stringCopy(char* dest, char* src) {   // 10시 50분
	char* originptr = dest;   // 선두번지 주소값을 기록해둔다.

	while (*src != '\0') {
		*dest = *src;   // src에 있는 문자를 dest에 복사한다.

		dest++;   // dest의 주소값을 그다음 위치값을 가르치도록 한다.
		src++;
	}

	*dest = '\0';

	return originptr;   // 
}

// 두 문자열 병합함수 (합쳐주는)
// dest의 선두번지 주소값을 리턴
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

// 두 문자열 비교함수
// 두 문자열이 같으면 0;
// 틀리면 1, -1;
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
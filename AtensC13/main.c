#include <stdio.h>

// 문자열의 문자갯수 세는 함수
//int StringLength(char* str) 
int StringLength(char str[])
{
	int i = 0;
	while (str[i]) {
		i++;
	}

	return i;
}

// 문자열을 복사해주는 함수
// dest의 선두번지 주소값을 리턴
char* stringcopy(char* dest, char* src) {
	int i = 0;

	while (src[i]) {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return dest;
}

// 두 문자열 병합함수 (합쳐주는)
// dest의 선두번지 주소값을 리턴
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

// 두 문자열 비교함수
// 두 문자열이 같으면 0;
// 틀리면 1, -1;
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

// 문장에서 소문자를 대문자로 바꿔주는 함수
char* ToUpperString(char* str) {
	int i = 0;

	while (str[i]) {
		if (97 <= str[i] && str[i] <= 122) {
			str[i] -= 32;
		}
		i++;
	}

	return str;
}

// 문장에서 대문자를 소문자로 바꿔주는 함수
char* ToLowerString(char* str) {
	int i = 0;

	while (str[i]) {
		if (65 <= str[i] && str[i] <= 90) {
			str[i] += 32;
		}
		i++;
	}

	return str;
}

// 문장에서 부분만 복사해주는 함수
// src의 index위치에서 부터 dest로 복사
char* SubString(char* dest, char* src, int index) {
	int i = 0;

	while (src[i + index]) {
		dest[i] = src[i + index];

		i++;
	}
	dest[i] = '\0';

	return dest;
}

int main() {
	char str1[30] = "MONSTER";
	char str2[30];
	char str3[] = " IS WORLD!!";
	char str4[] = "MONSTER";
	char str5[] = "MONS";
	char str6[] = "abc";
	char str7[] = "ABC";
	char str8[] = "AbCdEfG";
	char str9[30];

	// 만든 함수를 호출해서 결과값을 출력하세요....

	printf("StringLength of str1 = %d\n", StringLength(str1));
	printf("StringLength of str3 = %d\n", StringLength(str3));

	printf("StringCopy of str1 in str2 = %s\n", stringcopy(str2, str1));

	printf("StringCompare str1 & str4 = %d\n", stringCompare(str1, str4));
	printf("StringCompare str1 & str3 = %d\n", stringCompare(str1, str3));
	printf("StringCompare str1 & str5 = %d\n", stringCompare(str1, str5));

	printf("StringConcat str1 & str3 = %s\n", stringConcat(str1, str3));

	printf("str6 to upperstring = %s\n", ToUpperString(str6));
	printf("str7 to lowerstring = %s\n", ToLowerString(str7));
	printf("str8 to upperstring = %s\n", ToUpperString(str8));
	printf("str8 to lowerstring = %s\n", ToLowerString(str8));

	printf("Substring str4 to str9 = %s\n", SubString(str9, str4, 3));

	return 0;
}
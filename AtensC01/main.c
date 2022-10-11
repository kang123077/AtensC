#include <stdio.h>

//각 변수에 값을 저장하고
//값을 출력해보는 실습

//문자열 s의 길이를 출력하는 함수
int strlen(const char* s) {
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

int main() {
	short a = 32767;
	long b = 2147483647;
	long long loong = 9223372036854775807;
	int c = 2147483647;

	// %ld = long 형 출력
	// %lld = long long 형 출력
	printf("a = %d\nb = %ld\nc = %d\n", a, b, c);
	printf("long long = %lld\n", loong);

	unsigned short d = 40;
	unsigned long e = 50;
	unsigned int f = 60;

	// %u = unsigned 출력
	printf("d = %d\ne = %d\nf = %d\n", d, e, f);

	float g = 3.7f;
	double h = 200.345;

	printf("g = %f\nh = %lf\n", g, h);

	char i = 66;
	unsigned char j = 67;

	printf("i = %c\nj = %c\n", i, j);

	int score = 20;
	float fscore = 3.4f;
	// f를 붙이면 float로 인식 (없으면 double로)
	double dscore = 100.234;
	char Achar = 65;

	// %d = 정수값 출력
	// %f = float값 출력
	// %lf = double값 출력
	// %c = 문자형 출력
	printf("score = %d, fscore = %f, dscroe = %lf, A = %c", score, fscore, dscore, Achar);

	const char* str = "Hello, world!";

	printf("%d\n", strlen(str));

	return 0;
}
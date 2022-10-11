#include <stdio.h>

int main() {
	int a = 1;
	int b = 2;

	int ret = a / b;
	printf(" %d / %d = %d\n", a, b, ret);

	float fret = a / b;
	printf(" %d / %d = %d\n", a, b, fret);

	fret = a / (float)b; //한쪽을 float형으로 형변환을 해서
						//정수 / 실수로 바꾼다.
	printf(" %d / %d = %f\n", a, b, fret);

	return 0;
}
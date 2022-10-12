#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	// 박스 toppt(5, 5), bottompt(10, 10)와
	// 입력받은 점이 박스와 겹쳤는지 확인하는 로직을 만들어보세요

	int x = 0;
	int y = 0;
	int ret = 0;

	printf("x, y 좌표값을 입력하세요: ");
	scanf("%d", &x);
	printf("y 좌표값을 입력하세요: ");
	scanf("%d", &y);

	ret = (((5 <= x) && (x <= 10)) && ((5 <= y) && (y <= 10)));

	printf("ret : %d\n", ret);

	switch (ret)
	{
		case 0:
			printf("점이 박스 바깥에 있습니다.");
			break;
		case 1:
			printf("점이 박스 안에 있습니다.");
			break;
	}

	// 두 박스가 겹쳤는지 확인하는 로직을 만들어 보세요

	return 0;
}
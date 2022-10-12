#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 두 박스가 겹쳤는지 확인하는 로직을 만들어 보세요

int main() {
	//첫번째 박스 좌표 4개
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	//두번쨰 박스 좌표 4개
	int x3 = 0;
	int y3 = 0;
	int x4 = 0;
	int y4 = 0;
	//겹침 판정
	int temp = 0;

	printf("첫번째 박스의 시작 좌표값을 입력하세요 (x, y) : ");
	scanf("%d, %d", &x1, &y1);
	printf("첫번째 박스의 끝 좌표값을 입력하세요 (x, y) : ");
	scanf("%d, %d", &x2, &y2);

	printf("두번째 박스의 시작 좌표값을 입력하세요 (x, y) : ");
	scanf("%d, %d", &x3, &y3);
	printf("두번째 박스의 끝 좌표값을 입력하세요 (x, y) : ");
	scanf("%d, %d", &x4, &y4);

	return 0;
}
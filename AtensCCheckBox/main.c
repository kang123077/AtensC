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
	//겹침 판정 변수
	int coor1 = 0;
	int coor2 = 0;
	int coor3 = 0;
	int coor4 = 0;
	int finalCheck = 0;

	printf("첫번째 박스의 시작 좌표값을 입력하세요 (x, y) : ");
	scanf("%d, %d", &x1, &y1);
	printf("첫번째 박스의 끝 좌표값을 입력하세요 (x, y) : ");
	scanf("%d, %d", &x2, &y2);

	printf("두번째 박스의 시작 좌표값을 입력하세요 (x, y) : ");
	scanf("%d, %d", &x3, &y3);
	printf("두번째 박스의 끝 좌표값을 입력하세요 (x, y) : ");
	scanf("%d, %d", &x4, &y4);

	coor1 = (((x3 < x1) && (x1 < x4)) && ((y3 < y1) && (y1 < y4)));
	coor2 = (((x3 < x2) && (x2 < x4)) && ((y3 < y1) && (y1 < y4)));
	coor3 = (((x3 < x1) && (x1 < x4)) && ((y3 < y2) && (y2 < y4)));
	coor4 = (((x3 < x2) && (x2 < x4)) && ((y3 < y2) && (y2 < y4)));

	finalCheck = coor1 || coor2 || coor3 || coor4;

	switch (finalCheck)
	{
	case 0:
		printf("박스가 겹치지 않습니다.");
		break;
	case 1:
		printf("박스가 겹쳤습니다.");
		break;
	}

	return 0;
}
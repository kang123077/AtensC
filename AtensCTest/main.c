#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main() {

	char oper = 0;

	printf("���� ����� �Է��ϼ���(+, -, *, /) :");
	scanf("%c", &oper);

	// switch case ���ȿ��� ������ ������ ����
	// { } �߰�ȣ ���� ����� �ȿ� ������ �����ؾ� �Ѵ�.

	switch (oper)
	{
	case '+': {
		int a = 20;
		int b = 30;
		printf("%d + %d = %d\n", a, b, a + b);
	}
	break;
	case '-': {
		int a = 20;
		int b = 30;
		printf("%d - %d = %d\n", a, b, a - b);
	}
	break;
	case '*': {
		int a = 20;
		int b = 30;
		printf("%d * %d = %d\n", a, b, a * b);
	}
	break;
	case '/': {
		int a = 20;
		int b = 30;
		printf("%d / %d = %f\n", a, b, (float)a / (float)b);
	}
	break;
	default:
		printf("��ȣ�� �Է����ּ���");
		break;
	}

	int inputValue = 0;
	double finputValue = 0.0;

	printf("�������� �Է��ϼ���: ");
	scanf("%d", &inputValue);
	printf("�Ǽ����� �Է��ϼ���: ");
	scanf("%lf", &finputValue);


	switch (inputValue) {
	case 10:
		printf("inputValue 10�Դϴ�.");
		break;

	case 20:
		printf("inputValue 20�Դϴ�.");
		break;

	case 30:
		printf("inputValue 30�Դϴ�.");
		break;

	default:
		if (finputValue == 1.2) {
			printf("inputValue 1.2�Դϴ�.");
		}
		else if (finputValue == 3.4) {
			printf("inputValue 3.4�Դϴ�.");
		}
		else {
			printf("���� �߸� �Է��ϼ̽��ϴ�.");
		}
		break;
	}

	return 0;
}
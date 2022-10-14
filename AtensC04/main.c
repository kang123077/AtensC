#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 20;

	if (a <= 20) { // ���� ���ǹ�
		printf("a:%d�� 20���� �۰ų� ����.\n", a);
	}

	if (10 < a && a < 20) {
		printf("a:%d�� 10���� ũ�� 20���� �۴�.\n", a);
	}

	// C������ ������ ���������� ó���ϱ� ������
	// ���ǽĿ� �������� ����� �� �ִ�.
	if (!(a - 20)) {
		printf("a:%d�� 20�� ����\n", a);
	}

	float b = 3.4f;

	if (b > 0.0f) {
		printf("b:%f�� 0.0f���� �۴�\n", b);
	}
	else {
		printf("b:%f�� 0.0f���� ũ�ų� ����.\n", b);
	}

	if (a < 0) {
		printf("a:%d�� 0���� �۴�.\n", a);
	}
	else {
		if (!(a - 20)) {
			printf("a:%d�� 20�� ����.\n", a);
		}
		else {
			printf("a:%d�� 20���� ũ��.\n", a);
		}
	}

	int money = 0;

	printf("�ƹ����� �ֽ� �뵷 �׼��� �Է��ϼ���: ");
	scanf("%d", &money);

	// ������ ������ �϶�
	// ȣ�� Ƚ���� ���� ��� ȿ������ ����
	// Ȯ���� ���� �κ��� �� ���� ��ġ�Ѵ�
	// ex) �߱������� �� Ȯ���� ���� ���� ���
	if ((money > 40000) && (money <= 60000)) {
		printf("�߱������� ����\n");
	}
	else if (money > 100000) { // ���� ���ǹ�
		printf("PC������ ����\n");
	}
	else if ((money > 60000) && (money <= 100000)) {
		printf("�뷡������ ����\n");
	}
	else if ((money > 20000) && (money <= 40000)) {
		printf("����̳� �Դ´�\n");
	}
	else { // else���� ���� ����
		printf("�����̳� �ܴ�\n");
	}

	int buttonNum = 0;

	printf("����Ʈ ��Ʈ���� ��ư ��ȣ�� �Է��ϼ���: ");
	scanf("%d", &buttonNum);

	// �������� ��ȭ�� ���� �б��ų ��
	// Switch-case�� ���

	switch (buttonNum) {
	case 1:
		printf("TV�� ����\n");
		break;
	case 2:
		printf("TV�� �Ҵ�\n");
		break;
	case 3:
		printf("������ ���δ�\n");
		break;
	case 4:
		printf("������ �����\n");
		break;
	case 5:
		printf("ä���� ���δ�\n");
		break;
	case 6:
		printf("ä���� �����\n");
		break;
	default: // default�� ���� ����
		printf("�������� ���� ��ư�Դϴ�.\n");
		break;
	}

	char oper = 0;

	printf("���� ����� �Է��ϼ���(\+, \-, \*, \/) : ");
	scanf(" %c", &oper);

	// switch case ���ȿ��� ������ ������ ����
	// { } �߰�ȣ ���� ����� �ȿ� ������ �����ؾ� �Ѵ�.

	switch (oper)
	{
	case '+': {
		int a = 20;
		int b = 30;
		printf("%d + %d = %d\n", a, b, a + b);
		break;
	}
	case '-': {
		int a = 20;
		int b = 30;
		printf("%d - %d = %d\n", a, b, a - b);
		break;
	}
	case '*': {
		int a = 20;
		int b = 30;
		printf("%d * %d = %d\n", a, b, a * b);
		break;
	}
	case '/': {
		int a = 20;
		int b = 30;
		printf("%d / %d = %f\n", a, b, a / (float)b);
		break;
	}
	default:
		printf("��ȣ�� �Է����ּ���");
		break;
	}

	int number = 0;

	printf("���ڸ� �Է� �� �ּ���: ");
	scanf("%d", &number);

	switch (number) {
	case 0:
	case 1:
	case 2:
		printf("0~2 ������ ���ڸ� �Է��ϼ̽��ϴ�.\n");
		break;
	case 5:
	case 6:
	case 7:
		printf("5~7 ������ ���ڸ� �Է��ϼ̽��ϴ�.\n");
		break;
	default:
		printf("0, 1, 2, 5, 6, 7 �̿��� ���ڸ� �Է��ϼ̽��ϴ�.\n");
		break;
	}

	return 0;
}
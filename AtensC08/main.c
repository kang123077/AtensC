#include <stdio.h>

typedef struct tagCar {
	int type;   // 0: �¿���, 1: Ʈ��, 2: ����
	int wheelCount;   // ������
	int sitCount;   // �¼���
	int isCargo;   // ȭ��ĭ����

	struct tagCar* Next;   // ���� �ڵ��������� �ּҰ� ����
} Car;

// returntype : �Լ��� �����ִ� ��ɾ�ó���ϰ� � datatype�� �����
// �� �����ٰ������� ����, (void : ���ϰ��� ���ٴ� �ǹ��Դϴ�.)
// �Լ���: ������� ��ɾ �����Ҷ� ����� �̸�.
// �Ű�����(parameter): �Լ��� ȣ���Ҷ� ���޵� ���� ������ �Լ����η� ������ ����

// returntype �Լ���(�Ű�����) {
// ��ɾ� ;
//}

// void PrintMonster(); <= �Լ��� ����(prototype)
void PrintMonster() // �Լ� ������
{
	printf("Monster");
	printf("Monster");
	printf("Monster");
	printf("Monster");
	printf("Monster");
}

// ������ 2���� �����ϴ� �Լ�
// returntype�� �ִ� ��쿡�� �ݵ��� return���� �ֽ��ϴ�.
// return���� �Լ��� ��ɾ ó���� ������� �Լ��ܺη� �����ϴ�
// ��Ȱ�� �մϴ�.
// ȣ��� ���޵� ���ڰ��� �޴� ������ �Ű�������� �մϴ�.
// a�� b������ �Ű������Դϴ�.

int add(int a, int b) {
	int sum;
	sum = a + b;

	return sum;
}

int sub(int a, int b) {
	int sum;
	sum = a - b;

	return sum;
}

int mul(int a, int b) {
	int sum;
	sum = a * b;

	return sum;
}

int div(int a, int b) {
	int sum;
	sum = a / b;

	return sum;
}

// ����/ ������ �Լ��� ����� ������.
// ����ð� main�Լ����� ȣ���Ͽ� ������ ������� ����ϼ���...

int main() {
	//struct tagCar a;
	Car bmw;
	bmw.type = 0;
	bmw.wheelCount = 4;
	bmw.sitCount = 5;
	bmw.isCargo = 1;

	Car* pb = &bmw;

	// ����ü ������ �ּҰ����� ����ü ����� ����
	// �� ���� ȭ��ǥ(->) �����ڸ� ����Ѵ�.

	printf("Ÿ�� : %d\n", pb->type);
	printf("���� �� : %d\n", pb->wheelCount);
	printf("�¼� �� : %d\n", pb->sitCount);
	printf("��ĭ : %d\n", pb->isCargo);

	Car a;
	Car b;
	Car c;
	Car d;

	a.type = 0;
	a.wheelCount = 4;
	a.sitCount = 5;
	a.isCargo = 1;
	a.Next = &b;

	b.type = 1;
	b.wheelCount = 6;
	b.sitCount = 4;
	b.isCargo = 1;
	b.Next = &c;

	c.type = 2;
	c.wheelCount = 8;
	c.sitCount = 48;
	c.isCargo = 1;
	c.Next = &d;

	d.type = 3;
	d.wheelCount = 8;
	d.sitCount = 48;
	d.isCargo = 1;
	d.Next = NULL;

	// a������ ������ d������ ����� ���� ����.
	printf("d.type = %d\n", a.Next->Next->Next->type);
	printf("d.wheelCount = %d\n", a.Next->Next->Next->wheelCount);
	printf("d.sitCount = %d\n", a.Next->Next->Next->sitCount);
	printf("d.IsCargo = %d\n", a.Next->Next->Next->isCargo);

	// a������ ������ c������ ����� ���� 
	// type = 1
	// wheelCount = 6
	// sitCount = 8
	// IsCargo = 0
	// ���� ������ �Ŀ� ���� ����غ�����....

	// a������ ������ c������ ����� �� ����
	a.Next->Next->type = 1;
	a.Next->Next->wheelCount = 6;
	a.Next->Next->sitCount = 8;
	a.Next->Next->isCargo = 0;

	// c������ �� ���
	printf("c.type = %d\n", a.Next->Next->type);
	printf("c.wheelCount = %d\n", a.Next->Next->wheelCount);
	printf("c.sitCount = %d\n", a.Next->Next->sitCount);
	printf("c.IsCargo = %d\n", a.Next->Next->isCargo);

	char* typeArray[] = { "�¿���", "����", "Ʈ��", "ȭ����" };
	char* IsCargoArray[] = { "����" , "�ִ�" };

	Car* Current = &a;

	while (Current != NULL)
	{
		printf("Ÿ��: %s\n", typeArray[Current->type]);
		printf("������: %d\n", Current->wheelCount);
		printf("�¼���:  %d\n", Current->sitCount);
		printf("��ĭ����: %s\n", IsCargoArray[Current->isCargo]);
		printf("\n");

		Current = Current->Next;
	}

	PrintMonster();

	int a2 = 20;
	int b2 = 30;

	int ret = add(a2, b2);   // �Լ��� ȣ���Ҷ� ���޵Ǵ� ���� ����(argument)��� �մϴ�.

	printf("%d + %d = %d\n", a2, b2, ret);

	ret = sub(a2, b2);

	printf("%d - %d = %d\n", a2, b2, ret);

	ret = mul(a2, b2);

	printf("%d * %d = %d\n", a2, b2, ret);

	ret = div(a2, b2);

	printf("%d / %d = %f\n", a2, b2, (float)ret);


	return 0;
}
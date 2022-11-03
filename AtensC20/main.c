#include <stdio.h>
#include <string.h>

int main() {
	int array[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };

	printf("���� ����\n");
	for (int i = 0; i < 10; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}

	memcpy(array, array + 5, sizeof(int) * 5);

	printf("��������\n");
	for (int i = 0; i < 10; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}

	int array2[10] = { 1, 2, 3, 4, 5 };
	int array3[10] = { 1, 2, 3, 4, 5 };

	// �޸� ���Լ� memcmp
	// �޸� ������ ������ 0�� ����, �ٸ��� src�� ���� src2�� ���� ũ�⸦ ���ؼ� 1, -1 ����
	if (memcmp(array2, array3, sizeof(int) * 10) == 0) {
		printf("array2�� array3�� ��ġ\n");
	}
	else {
		printf("array2�� array3�� ����ġ\n");
	}

	array3[5] = 1000;
	if (memcmp(array2, array3, sizeof(int) * 10) == 0) {
		printf("array2�� array3�� ��ġ\n");
	}
	else {
		printf("array2�� array3�� ����ġ\n");
	}


	char str[] = "I am a boy";
	char* pos;
	char inputvalue = '_';
	char* pstr = str;

	printf("���� �� str = %s\n", str);

	while (1) {

		// �޸𸮿��� ���� �˻� memchr
		// ������ NULL�� ����
		// ������ �ش� ��ġ�� �޸� �ּҰ��� ����
		pos = (char*)memchr(pstr, 'a', strlen(pstr));

		if (pos != NULL) {
			*pos = inputvalue;
			pstr = pos + 1;
		}
		else {
			break;
		}
	}

	printf("���� �� str = %s\n", str);

	return 0;
}
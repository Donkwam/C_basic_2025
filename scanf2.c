#include <stdio.h>

int main()
{
	char str[20];
	printf("���ڿ��� �Է��ϼ���: ");
	scanf_s("%s", str, sizeof(str));	// sizeof�� �迭�� ũ�⸦ ��ȯ�ϴ� ������

	printf("�Է��� ���ڿ�: %s\n", str);

	/*printf("char ũ��: %d\n", sizeof(char));
	printf("���� ũ��: %d\n", sizeof(int));
	printf("float ũ��: %d\n", sizeof(float));
	printf("double ũ��: %d\n", sizeof(double));*/		// �ּ� ���ﶧ Ctrl+K+C, �ּ������� Ctrl+K+U

	return 0;	
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 30;
	int res;

	res = (n > 10) && (n < 20);
	printf("res : %d\n", res);		// 0�� ����, 1�� �� , &&�� AND ������ �Ѵ� ���̿�����
	// ��ǻ�ʹ� 0�� �������� ���� ������ �Ǵ��Ѵ�.
	res = (n < 10) || (n > 20);
	printf("res : %d\n", res);		// ||�� OR ������ ���� �ϳ��� ���̿��� ����
	res = !(n >= 30);				// ���� ���� ������(+=, -=, *=, /=, %=), !�� ���� ������
	printf("res : %d\n", res);		
	
	res = ~n;
	printf("res : %d\n", res);

	return 0;
}
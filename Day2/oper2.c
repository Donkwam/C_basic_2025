#include <stdio.h>

int main()
{
	int n = 10, n2 = 20;
	int res;

	res = (n > n2) ? n : n2;	// 3항 연산자
	printf("res: %d\n", res);

	printf("n++: %d\n", n++);	// 후위 증가 연산자 
	printf("++n2: %d\n", ++n2);	// 전위 증가 연산자

	res = n++;
	printf("res: %d, n: %d\n", res, n);		// res: 10, n: 11
	res = ++n2;
	printf("res: %d, n2: %d\n", res, n2);	// res: 21, n2: 21



	return 0;	
}
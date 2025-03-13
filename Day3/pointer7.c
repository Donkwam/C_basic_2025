/*

*/
//#include <stdio.h>
//
//void printAry(int*, int);
//void inputAry(int);
//
//int main()
//{
//	int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int ary2[] = { 1, 2, 3 };
//
//	int size = sizeof(ary2) / sizeof(ary2[0]);
//	
//	printf("입력할 값을 넣으세요.");
//	getchar();
//	inputAry(ary, size);
//	printAry(ary2, size);
//
//	return 0;
//}
//
//void printAry(int* p, int _size)
//{
//	int i;
//	for (i = 0; i < _size; i++) {
//		printf("ary[%d]: %d\n", i, p[i]);
//	}
//}
//
//void inputAry(int* p, int _size)
//{
//	int u;
//	printf("배열의 갯수는: %d", _size);
//	for (u = 0; u < _size; u++) {
//		printf("[%d]번째 넣을숫자를 입력하세요.", u);
//		scanf("%d", &u);
//	}
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char str[100];
//	char* ps[5];
//	printf("문자열을 입력하세요>> ");
//	for (int i = 0; i < 5; i++) {
//		gets(str);
//		printf("입력한 문자열: %s\n", str);
//
//		ps[i] = (char*)malloc(strlen(str) + 1);
//		if (ps == NULL) {
//			exit(1);
//		}
//		strcpy(ps[i], str);
//		printf("heap: %s\n", ps[i]);
//
//		free(ps[i]);
//	}
//	return 0;
//}

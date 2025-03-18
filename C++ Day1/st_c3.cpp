/*
	C++ class
*/
#include <iostream>

class Human {
public:		// 객체지향의 정보 은닉을 풀어주는 함수
	char name[20];
	int age;
	char job[10];
	
	Human() {		// 디폴트 생성자(입력이 없는 것)
	}
	void showHuman()
	{
		printf("name: %s, age: %d, job: %s", name, age, job);
	}

};

int main()
{
	Human h = { "김철수", 30, "백수" };
	h.showHuman();
	return 0;
}
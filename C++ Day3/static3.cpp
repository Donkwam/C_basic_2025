///*
//	StaticTest라는 클래스를 만드는데 멤버변수로 이름, 전화번호, 주소, 회원번호(cnt)를 가지고
//	3개 입력을 받는 생성자를 작성한다. 회원번호는 자동으로 증가시킬 것이기 때문에.
//	출력담당의 showmember() 메서드로 구현하시오
//*/
//#include <iostream>
//#include <cstring>
//
//class StaticTest {
//private:
//    static int count;  // 회원번호를 위한 static 변수
//    int memberID;      // 개별 회원번호 저장
//
//public:
//    char name[20];
//    char phone[20];
//    char addr[20];
//
//    // 생성자
//    StaticTest(const char* n, const char* p, const char* a) {
//        strcpy(name, n);
//        strcpy(phone, p);
//        strcpy(addr, a);
//        memberID = ++count;  // 회원번호 자동 증가
//    }
//
//    // 멤버 정보 출력
//    void showmember() {
//        std::cout << "회원번호: " << memberID << std::endl;
//        std::cout << "이름: " << name << ", 전화번호: " << phone << ", 주소: " << addr << std::endl;
//    }
//};
//
//// static 멤버 변수 초기화
//int StaticTest::count = 0;
//int manin()
//{
//	StaticTest m1("홍길동", "010-1111-1111", "부산");
//	m1.showmember();
//	StaticTest m2("김영희", "010-1111-1111", "부산");
//	m2.showmember();
//	StaticTest m3("김철수", "010-1111-1111", "울산");
//	m3.showmember();
//	return 0;
//}
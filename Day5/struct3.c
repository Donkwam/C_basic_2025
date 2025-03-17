//#include <stdio.h>
//
//struct profile {
//	int age;
//	double heigh;
//	double weight;
//};
//
//struct student {
//	struct profile pf;
//	int id;
//	double grade;
//};
//
//int main()
//{
//	struct student s;
//	s.grade = 99;
//	s.id = 201212;
//	s.pf.age = 20;
//	s.pf.heigh = 161.6;
//	s.pf.weight = 50.3;
//
//	printf("키: %.1lf", s.pf.heigh);
//	printf("몸무게: %.1lf", s.pf.weight);
//	printf("나이: %d", s.pf.age);
//
//	return 0;
//}
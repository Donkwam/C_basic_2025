/*

*/
#include <iostream>

struct B;
struct A {
	std::shared_ptr<B> b_ptr;

};
struct B {
	std::shared_ptr<A> a_ptr;

};

int main()
{
	std::shared_ptr<A> a(new A());
	std::shared_ptr<B> b(new B());

	a->b_ptr = b;
	b->a_ptr = a;

	return 0;
}
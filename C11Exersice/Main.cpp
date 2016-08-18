#include <string>
#include <iostream>
#include "Singleton.hpp"

struct A
{
	A(const std::string&) {
		std::cout << "lvalue" << std::endl;
	}
	A(std::string&& x)
	{
		std::cout << "rvalue" << std::endl;
	}
};
struct B
{
	B(const std::string&) {
		std::cout << "lvalue" << std::endl;
	}
	B(std::string&& x)
	{
		std::cout << "rvalue" << std::endl;
	}
};
struct C
{
	C(int x,double y){}
	void Fun() const
	{
		std::cout << "test" << std::endl;
	}
};
int main(int argc, char* argv[])
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	std::string str = "bb";
	Singleton<A>::Instance(str);
	Singleton<B>::Instance(std::move(str));
	Singleton<A>::DestroyInstace();
	Singleton<B>::DestroyInstace();

	system("pause");
}

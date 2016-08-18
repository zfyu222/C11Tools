#include <cstdlib>
#include <algorithm>
#include <string>
#include <iostream>

template<typename Type>
struct GetLeftSize:std::integral_constant<int,1>
{
	
};
int main(int argc, char* argv[])
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	std::cout << GetLeftSize<int>::value;
	

	system("pause");
}

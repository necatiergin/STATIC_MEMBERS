#include <iostream>

class Nec {
public:
	static int foo()
	{
		return 1;
	}

	static int msx;
	static int msy;
};

int foo()
{
	return 2;
}

int Nec::msx = foo();
int Nec::msy = ::foo();

int main()
{
	std::cout << Nec::msx << Nec::msy;
}

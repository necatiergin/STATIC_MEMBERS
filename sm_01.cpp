#include <iostream>

//nec.h
class Nec {

public:
	static int x;
	static int y;
	static int z;
};

//nec.cpp
int Nec::x;
int Nec::y = 20;
int Nec::z{ 30 };

int main()
{
	std::cout << "Nec::x = " << Nec::x << '\n';
	std::cout << "Nec::y = " << Nec::y << '\n';
	std::cout << "Nec::z = " << Nec::z << '\n';
}

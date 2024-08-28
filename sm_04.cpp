//nec.h
class Nec {

public:
	inline static int x{ 10 };	//C++17
};

//file a.cpp 
//#include "nec.h"

#include <iostream>
void fa()
{
	std::cout << "&Nec::x = " << &Nec::x << '\n';
}

//file b.cpp 
//#include "nec.h"
void fb()
{
	std::cout << "&Nec::x = " << &Nec::x << '\n';
}

//main.cpp
void fa();
void fb();

int main()
{
	fa();
	fb();
}

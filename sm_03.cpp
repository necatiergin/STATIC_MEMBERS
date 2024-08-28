//nec.h
class Nec {

public:
	static int x;
	static int y;
	static int z;
	static int foo();
};

int foo(int, int);

int Nec::x = foo(10, 20); //invalid code - name hiding
int Nec::y = ::foo(10, 20); //valid
int Nec::z = foo();  //valid

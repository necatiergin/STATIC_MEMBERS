class A;  // A is an incomplete type

//nec.h
class Nec {

public:
	static Nec snec; //valid - declaration only
	static A sa;	 //valid - declaration only
	static int a[];  // valid - declaration only
};

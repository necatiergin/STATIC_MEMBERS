class A {
	//static int x = 10; // invalid, not const not integral type
};


class B {
	//const static double x = 2.0;  //invalid, not an integral type
};

class C {
	const static int x = 10;  //valid
};

class D {
	constexpr static int x = 10;  //valid
};

class E {
	constexpr static double x = 2.3;  //valid
};

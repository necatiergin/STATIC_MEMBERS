class A {
public:
	static void foo();
	static int s;
};

int main()
{
	auto x = A::s;
	A::foo();
	A a;
	A* pa{ &a };
	A& ra = a;

	a.foo(); //valid 
	pa->foo(); //valid
	ra.foo(); //valid
}

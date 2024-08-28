class Myclass {
public:
	//static member function
	static void func()
	{
		//auto a = this; //invalid, there is no this pointer
		//m_x = 20; //invalid, there is no this pointer
		s = 45; // valid
		//foo();  //invalid, there is no this pointer
		sfunc(); //valid
	}

private:
	void foo();
	static void sfunc();
	static int s;
	int m_x;
};

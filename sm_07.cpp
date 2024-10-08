class Myclass {
public:
	//Myclass() : mx(10) {} //invalid

	static void func() const; //invalid
private:
	static int mx;
};

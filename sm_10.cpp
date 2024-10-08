// named-constructor idiom

class Complex {
public:
	static Complex create_polar(double distance, double angle)
	{
		return Complex(distance, angle);
	}

	static Complex create_cartesian(double r, double i)
	{
		return Complex(r, i, 0);
	}
	//...
private:
	Complex(double r, double i, int dummy); // constructor for cartesian
	Complex(double distance, double angle); // constructor for polar
	//
};

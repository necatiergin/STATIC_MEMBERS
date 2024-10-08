// keep live and lived number of objects

class Nec{
public:
	Nec()
	{
		++no_of_alive;
		++no_of_lived;
	}

	~Nec()
	{
		--no_of_alive;
	}
	Nec(const Nec&) = delete;
	
	Nec& operator=(const Nec&) = delete;

	static int get_no_of_alive()
	{
		return no_of_alive;
	}

	static int get_no_of_lived()
	{
		return no_of_lived;
	}

private:
	inline static int no_of_alive{};
	inline static int no_of_lived{};
	//...
};

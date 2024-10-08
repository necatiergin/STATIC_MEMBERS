class DynamicOnly{
public:
	static DynamicOnly* create_object()
	{
		return new DynamicOnly();
	}

	DynamicOnly(const DynamicOnly&) = delete;
	DynamicOnly& operator=(const DynamicOnly&) = delete;

private:
	DynamicOnly();
	//...
};

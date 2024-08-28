//object count

#include <cstddef>

class Person {
public:
	Person()
	{
		++live_object_count;
		++total_object_count;
	}

	~Person()
	{
		--live_object_count;
	}

	static size_t get_live_count()
	{
		return live_object_count;
	}

	static size_t get_total_object_count()
	{
		return total_object_count;
	}

	Person(const Person&) = delete;
	Person& operator=(const Person&) = delete;

private:
	inline static std::size_t live_object_count{};
	inline static std::size_t total_object_count{};
};

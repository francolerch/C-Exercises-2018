#pragma once
#include <assert.h>

namespace cpp_class13_test {
	class TestContainer;
}

namespace cpp_class13 {

	template<typename T>
	class Container {
		friend cpp_class13_test::TestContainer;
	protected:
		using U = typename T::value_type;
		T m_Struct;

	protected:
		Container() {};
		~Container() {};
	public:
		void clear();
		unsigned int count() const;
		unsigned int count(const U& elem) const;
		unsigned int max() const;
		unsigned int min() const;
	};

	template<typename T>
	void Container<T>::clear()
	{
		m_Struct.clear();
	}

	template<typename T>
	unsigned int Container<T>::count() const
	{
		return m_Struct.size();
	}

	template<typename T>
	inline unsigned int Container<T>::count(const U& elem) const
	{
		assert(m_Struct.size() > 0);

		unsigned int count = 0;
		for (typename T::const_iterator it = m_Struct.begin(); it != m_Struct.end(); ++it)
		{
			if (elem == *it)
				count++;
		}

		return count;
	}

	template<typename T>
	unsigned int Container<T>::max() const
	{
		assert(m_Struct.size() > 0);

		U max = 0;

		for (typename T::const_iterator it = m_Struct.begin(); it != m_Struct.end(); ++it)
		{
			if (*it > max)
				max = *it;
		}

		return max;
	}

	template<typename T>
	unsigned int Container<T>::min() const
	{
		assert(m_Struct.size() > 0);

		U min = m_Struct[0];

		for (typename T::const_iterator it = m_Struct.begin() + 1; it != m_Struct.end(); ++it)
		{
			if (*it < min)
				min = *it;
		}

		return min;
	}
}
#pragma once
#include <map>

namespace cpp_class13 {
	template<typename T, typename U>
	class Bimap {
		friend cpp_class13_test::TestBimap;
	private:
		std::map<T, U> m_Struct;

	public:
		Bimap() {};
		~Bimap() {};
		bool insert(const T& key, const U& value);
		bool searchKey(const T& key) const;
		bool searchValue(const U& value) const;
		bool updateKey(const T& key, const T& newKey);
		bool updateValue(const U& value, const U& newValue);
		bool deleteKey(const T& key);
		bool deleteValue(const U& value);
		void clear();
	};

	template<typename T, typename U>
	bool Bimap<T, U>::insert(const T& key, const U& value)
	{
		return m_Struct.insert(std::make_pair(key, value)).second;
	}

	template<typename T, typename U>
	bool Bimap<T, U>::searchKey(const T& key) const
	{
		return m_Struct.find(key) != m_Struct.end();
	}

	template<typename T, typename U>
	bool Bimap<T, U>::searchValue(const U& value) const
	{
		for (typename std::map<T, U>::const_iterator it = m_Struct.begin(); it != m_Struct.end(); it++)
		{
			if (it->second == value)
			{
				return true;
			}
		}

		return false;
	}

	template<typename T, typename U>
	bool Bimap<T, U>::updateKey(const T& key, const T& newKey)
	{
		typename std::map<T, U>::const_iterator it = m_Struct.find(key);

		if (it != m_Struct.end()) 
		{
			U value = it->second;
			m_Struct.erase(it);

			return m_Struct.insert(std::make_pair(newKey, value)).second;
		}

		return false;
	}

	template<typename T, typename U>
	bool Bimap<T, U>::updateValue(const U& value, const U& newValue)
	{
		for (typename std::map<T, U>::const_iterator it = m_Struct.begin(); it != m_Struct.end(); it++)
		{
			if (it->second == value)
			{
				T key = it->first;
				m_Struct.erase(it);

				return m_Struct.insert(std::make_pair(key, newValue)).second;
			}
		}

		return false;
	}

	template<typename T, typename U>
	bool Bimap<T, U>::deleteKey(const T& key)
	{
		return m_Struct.erase(key);
	}

	template<typename T, typename U>
	bool Bimap<T, U>::deleteValue(const U& value)
	{
		for (typename std::map<T, U>::const_iterator it = m_Struct.begin(); it != m_Struct.end(); it++)
		{
			if (it->second == value)
			{
				m_Struct.erase(it);

				return true;
			}
		}

		return false;
	}

	template<typename T, typename U>
	void Bimap<T, U>::clear()
	{
		m_Struct.clear();
	}
}
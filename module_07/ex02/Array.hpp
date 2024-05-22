#ifndef ARRAY_HPP
# define ARRAY_HPP

# include<iostream>

template <typename T>
class Array
{
	private:
		T *m_array;
		unsigned int m_size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &obj);
		~Array();
		Array &operator=(const Array &obj);
		size_t size();


};

template<typename T>
Array<T>::Array(): m_array(nullptr), m_size(0)
{
	std::cout << "m_array: " << m_array << "\n";
	std::cout << "Constructed by BASIC constructor\n";
}

template<typename T>
Array<T>::Array(unsigned int n): m_size(n)
{
	try
	{
		m_array = new T[n];
		for (unsigned int i = 0; i < n; ++i)
		{
			// new (&m_array[i]) T();
			m_array[i] = 10;
			std::cout << m_array[i] << "\n";
		}
		std::cout << "\nArray address: " << m_array << "\n";
		std::cout << "Constructed by INT constructor\n";
	}
	catch(const std::bad_alloc &e)
	{
		std::cerr << "Memory allocation failure: " << e.what() << "\n";
		//handle failure!
	}
}

template<typename T>
Array<T>::Array(const Array<T> &obj): m_size(obj.m_size)
{
	m_array = (m_size > 0) ? new T[m_size] : nullptr;
	if (m_array)
		
	std::cout << "Constructed COPY constructor\n";
}

template<typename T>
Array<T>::~Array()
{
	if (m_array)
		delete[] m_array;
	std::cout << "DESTRUCTED\n";
}

template<typename T>
Array<T>&Array<T>::operator=(const Array<T> &obj)
{
	if (this != obj)
	{
		try
		{
			m_array = new T
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}

	std::cout << "Constructed by COPY ASSIGNMENT OPERATOR\n";
}

template<typename T>
size_t Array<T>::size()
{
	size_t count = 0;

	for (unsigned int i = 0; i < m_size; ++i)
		count++;
	return (count);
}

#endif

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include<iostream>
# include<stdexcept>

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
		T &operator[](size_t index);
		const T &operator[](size_t index) const;
		size_t 	size() const;
		void 	printAddress() const;
		void	printArray() const;
		void	fillArray(T value) const;
		void	tryOutOfBounds();
};

template<typename T>
Array<T>::Array(): m_array(nullptr), m_size(0)
{
	// std::cout << "Constructed by BASIC constructor\n";
}

template<typename T>
Array<T>::Array(unsigned int n): m_size(n)
{
	try
	{
		m_array = new T[n];
		// std::cout << "Constructed by INT constructor\n";
	}
	catch(const std::bad_alloc &e)
	{
		std::cerr << "Memory allocation failure: " << e.what() << "\n";
		std::exit(EXIT_FAILURE);

	}
}

template<typename T>
Array<T>::Array(const Array<T> &obj): m_size(obj.m_size)
{
	try
	{
		m_array = (m_size > 0) ? new T[m_size] : nullptr;
		if (m_array)
		{
			for (unsigned int i = 0; i < m_size; ++i)
				m_array[i] = obj.m_array[i];
		}
		// std::cout << "Constructed by COPY constructor\n";
	}
	catch (const std::bad_alloc &e)
	{
		std::cerr << "Memory allocation failure: " << e.what() << "\n";
		std::exit(EXIT_FAILURE);
	}
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
	if (this != &obj)
	{
		delete m_array;
		m_size = obj.m_size;
		try
		{
			m_array = (m_size > 0) ? new T[m_size] : nullptr;
			if (m_array)
			{
				for (unsigned int i = 0; i < m_size; ++i)
					m_array[i] = obj.m_array[i];
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << "Memory allocation failure: " << e.what() << "\n";
			std::exit(EXIT_FAILURE);

		}
		
	}
	// std::cout << "Constructed by COPY ASSIGNMENT OPERATOR\n";
	return (*this);
}

template<typename T>
T &Array<T>::operator[](size_t index)
{
		std::cerr << "NON CONST" << "\n";
	if (index >= m_size)
		throw std::out_of_range("Index out of range!");
	return (m_array[index]);
}

template<typename T>
const T &Array<T>::operator[](size_t index) const
{
	std::cerr << "CONST" << "\n";
	if (index >= m_size)
		throw std::out_of_range("Index out of range!");
	return (m_array[index]);
}


// template<typename T>
// const T &operator[](const Array<T> &obj, size_t index)
// {
// 	std::cout << "CONST" << "\n";
// 	if (index >= obj.m_size)
// 		throw std::out_of_range("Index out of range!");
// 	return (obj.m_array[index]);
// }

template<typename T>
size_t Array<T>::size() const
{
	size_t count = 0;

	for (unsigned int i = 0; i < m_size; ++i)
		count++;
	return (count);
}

template<typename T>
void Array<T>::printAddress() const
{
	std::cout << "Array address: " << m_array;
	std::cout << "\n";
}

template<typename T>
void	Array<T>::printArray() const
{
	std::cout << "ARRAY: ";
	for (unsigned int i = 0; i < m_size; ++i)
		std::cout << m_array[i] << " ";
	std::cout << "\nSIZE: " << m_size << "\n";
}

template<typename T>
void	Array<T>::fillArray(T value) const
{
	for (size_t i = 0; i < m_size; ++i)
		m_array[i] = value;
}

template<typename T>
void	Array<T>::tryOutOfBounds()
{
	try
	{
		std::cout << (*this)[1000000];
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << "Caught exception: " << e.what() << "\n";
	}
}



#endif

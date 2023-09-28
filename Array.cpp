#include <iostream>
#include <assert.h>
#include "Array.h"

Array::Array(const int size, const int vallue)
{
	if (size < 0)
	{
		std::cerr << "Array::Array: size is negative, invert" << '\n';
		m_size = -size;
	}
	else{
		m_size = size;
	}
	m_array = new int[m_size];
	for (int i = 0; i < m_size; ++i)
		m_array[i] = vallue;

}


Array::~Array()
{
	delete[] m_array;

}

void Array::print()
{
	std::cout << '[';
	for (int i = 0; i < m_size - 1; ++i) {
		std::cout << m_array[i] << ", ";
	}
	std::cout << m_array[m_size - 1] << "]\n";
}

int Array::size() const
{
	return m_size;
}

int& Array::operator[](const int index)
{
	assert(index >= 0 && index < m_size);
	return m_array[index];
}

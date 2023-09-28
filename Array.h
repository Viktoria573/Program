#pragma once

class Array
{
public:
	Array(const int size = 10, const int vallue = 0);
	~Array();

	void print();
	int size() const;

	int &operator[](const int index);

private:
	int *m_array = nullptr;
	int m_size = 0;

};

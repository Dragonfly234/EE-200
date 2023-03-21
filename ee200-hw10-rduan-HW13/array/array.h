#ifndef ARRAY_H
#define ARRAY_H
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>


class OutOfBoundsException :public std::exception
{
public:
	const char* what()const throw()
	{
		return "out of bounds";
	}
};


template <class T>
class Array {
	T* a = NULL;
	int SizeOfArray = 0;
	T* assemble = NULL;
	T* add = NULL;
	T* equal = NULL;//



public:
	Array();
	Array(int length, T value);
	Array(int length, T* values);
	Array(Array<T>& initial);
	~Array()
	{
		delete[] this->a;
	};
	
	friend std::ostream& operator << (std::ostream& cout, Array<T>& Input)
	{
		for (int i = 0; i < Input.size(); i++)
		{
			if (i == 0)
			{
				std::cout << "[" << Input[0] << ",";
			}
			else if (i == Input.size() - 1)
			{
				std::cout << Input[i] << "]";
			}
			else
			{
				std::cout << Input[i] << ",";
			}
		}
		return cout;
	}

	int size();
	void append(T x);
	void append(Array<T> y);
	void print();
	Array<T>& operator+(Array<T>& arr);
	Array<T>& operator=(Array<T>& initial);
	T& operator[](int n);

};


template <class T>
void Array<T>::print()
{
	for (int i = 0; i < this->SizeOfArray; i++)
	{
		if (i == 0)
		{
			printf("\n");
		}
		std::cout << *(a + i) << '\n';
		//printf("%d\n", *(a + i));
	}
	printf("the size is  %d", SizeOfArray);
	/*printf("the last number is %d\n", *add);
	printf("the last number is %d\n", *(a+SizeOfArray));*/
}


template <class T>
Array<T>::Array()
{
	this->a = NULL;
	this->assemble = NULL;
	this->add = NULL;
	this->equal = NULL;
	this->SizeOfArray = 0;
}

template <class T>
Array<T>::Array(int length, T value)
{
	this->SizeOfArray = length;
	this->assemble = NULL;
	this->equal = NULL;
	this->add = NULL;
	try{
	a = new T[SizeOfArray];
	for (int i = 0; i < SizeOfArray; i++)
	{
		*(this->a + i) = value;
	}
	}
	catch (std::bad_alloc& e)
	{
		std::cout << "There was an error: " << e.what() << std::endl;
	}
}


template <class T>
Array<T>::Array(int length, T* value)
{
	this->assemble = NULL;
	this->equal = NULL;
	this->add = NULL;
	if (value == NULL)
	{
		exit(0);
	}
	else
	{
		this->SizeOfArray = length;
		try {
			this->a = new T[SizeOfArray];
			for (int i = 0; i < SizeOfArray; i++)
			{
				*(this->a + i) = *(value + i);
			}
		}

		catch (std::bad_alloc& e)
		{
			std::cout << "There was an error: " << e.what() << std::endl;
		}
	}
}

template <class T>
Array<T>::Array(Array<T>& initial)
{
	this->assemble = NULL;
	this->add = NULL;
	this->equal = NULL;
	this->SizeOfArray = initial.SizeOfArray;
	try {
		this->a = new T[this->SizeOfArray];
		for (int i = 0; i < this->SizeOfArray; i++)
		{
			*(a + i) = *(initial.a + i);
		}
	}
	catch (std::bad_alloc& e)
	{
		std::cout << "There was an error: " << e.what() << std::endl;
	}
	
}

template <class T>
int Array<T>::size()
{
	return this->SizeOfArray;
}

template <class T>
void Array<T>::append(T x)
{
	this->SizeOfArray++;
	try {
		this->add = new T[this->SizeOfArray];
		for (int i = 0; i < this->SizeOfArray; i++)
		{
			if (i == this->SizeOfArray - 1)
			{
				*(this->add + i) = x;
			}
			else
			{
				*(this->add + i) = *(this->a + i);

			}
		}
		delete[] this->a;
		this->a = NULL;
		this->a = this->add;
	}

	catch (std::bad_alloc& e)
	{
		this->SizeOfArray--;///
		std::cout << "There was an error: " << e.what() << std::endl;
	}
}


template <class T>
void Array<T>::append(Array<T> y)
{
	this->SizeOfArray = this->SizeOfArray + y.SizeOfArray;
	try {
		this->assemble = new T[this->SizeOfArray];
		for (int i = 0; i < this->SizeOfArray; i++)
		{
			if (i < (this->SizeOfArray - y.SizeOfArray))
			{
				*(this->assemble + i) = *(this->a + i);
			}
			else
			{
				*(this->assemble + i) = *(y.a + i - (this->SizeOfArray - y.SizeOfArray));
			}
		}
		delete[] a;
		a = assemble;
	}
	catch (std::bad_alloc& e)
	{
		this->SizeOfArray = this->SizeOfArray - y.SizeOfArray;
		std::cout << "There was an error: " << e.what() << std::endl;
	}
}

template <class T>
Array<T>& Array<T>::operator=(Array& initial)
{
	//this->SizeOfArray = initial.SizeOfArray;
	/*delete[] a;
	a = NULL;*/
	try {
		equal = new T[initial.size()];
		for (int i = 0; i < initial.SizeOfArray; i++)
		{
			*(this->equal + i) = *(initial.a + i);
		}
	}
		catch (std::bad_alloc& e)
		{
			std::cout << "There was an error: " << e.what() << std::endl;
		}
		delete[] a;
		a = equal;
		return *this;
    
	
}




template <class T>
Array<T>& Array<T>:: operator+(Array<T>& arr)
{
	static Array<T> temp;
	if (this->a != temp.a)
	{
		temp.append(*this);
	}
	temp.append(arr);
	return temp;
}
template <class T>
T& Array<T>::operator[](int n)
{
	
	
	if (n >= this->SizeOfArray)
	{
		throw OutOfBoundsException();
	}
	else
	{
		return *(this->a + n);
	}
	

	/*catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}*/
}






#endif

#ifndef ARRAY_H
#define ARRAY_H
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>


template <class T>
class Array{
    T*a = NULL;
    int SizeOfArray = 0;
    T* assemble = NULL;
    T* add = NULL;



public:
	Array();
	Array(int length, T value);	
	Array(int length, T* values);
	Array(Array<T>& initial);
	~Array()
	{
		delete[] this->a;
	};

	friend std::ostream& operator << (std::ostream& cout,  Array<T>& Input)
	{
		for (int i = 0; i < Input.size(); i++)
		{
			if (i == 0)
			{
				std::cout << "[" << Input[0] << ",";
			}
			else if (i == Input.size() - 1)
			{
				cout << Input[i] << "]";
			}
			else
			{
				cout << Input[i] << ",";
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
		std::cout << *(a + i)<<'\n';
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
	this->SizeOfArray = 0;	
}

template <class T>
Array<T>::Array(int length, T value)
{
	this->SizeOfArray = length;
	this->assemble = NULL;
	this->add = NULL;

	a = new T[SizeOfArray];
	for (int i = 0; i < SizeOfArray; i++)
	{
		*(this->a + i) = value;
	}
	

}


template <class T>
Array<T>::Array(int length, T* value)
{
	this->assemble = NULL;
	this->add = NULL;
	if (value == NULL)
	{
		exit(0);
	}
	else
	{
		this->SizeOfArray = length;
		this->a = new T[SizeOfArray];
		for (int i = 0; i < SizeOfArray; i++)
		{
			*(this->a + i) = *(value + i);
		}
	}


}

template <class T>
Array<T>::Array(Array<T>& initial)
{
	this->assemble = NULL;
	this->add = NULL;
	this->SizeOfArray = initial.SizeOfArray;
	this->a = new T[this->SizeOfArray];
	for (int i = 0; i < this->SizeOfArray; i++)
	{
		*(a + i) = *(initial.a + i);
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


template <class T>
void Array<T>::append(Array<T> y)
{
	this->SizeOfArray = this->SizeOfArray + y.SizeOfArray;
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
template <class T>
Array<T>& Array<T>::operator=(Array& initial)
{
	this->SizeOfArray = initial.SizeOfArray;
	delete[] a;
	a = NULL;
	a = new T[this->SizeOfArray];
	for (int i = 0; i < initial.SizeOfArray; i++)
	{
		*(this->a + i) = *(initial.a + i);
	}
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
		printf("error!");
		exit(0);
	}
	else
	{
		return *(this->a + n);
	}
}





#endif

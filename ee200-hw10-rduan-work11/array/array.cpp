#include "array.h"
Array::Array()
{
	this->a = NULL;
	this->assemble = NULL;
	this->add = NULL;
	this->SizeOfArray = 0;
}
Array::Array(int length, int value)
{
	SizeOfArray = length;
	this->assemble = NULL;
	this->add = NULL;

	a = new int[SizeOfArray];
	for (int i = 0; i < SizeOfArray; i++)
	{
		*(this->a + i) = value;
	}
}
Array::Array(int length, int* value)
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
		this->a = new int[SizeOfArray];
		for (int i = 0; i < SizeOfArray; i++)
		{
			*(this->a + i) = *(value + i);
		}
	}
	
}


Array::Array(Array& initial)
	{
	this->assemble = NULL;
	this->add = NULL;
	this->SizeOfArray = initial.SizeOfArray;
	this->a = new int[this->SizeOfArray];
	for (int i = 0; i < this->SizeOfArray; i++)
	{
		*(a + i) = *(initial.a + i);
	}
	}


void Array::append(int x)
{
	this->SizeOfArray++;
	this->add = new int[this->SizeOfArray];
	for (int i = 0; i < this->SizeOfArray; i++)
	{
		if (i == this->SizeOfArray-1 )
		{
			*(this->add + i) = x;
		}
		else
		{
			*(this->add + i) = *(this->a + i);

		}
	}
	delete[] a;
	this->a = NULL;
	this->a =add;
}

void Array::append(Array y)
{
	this->SizeOfArray = this->SizeOfArray + y.SizeOfArray;
	this->assemble = new int[this->SizeOfArray];
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
	delete[] a;//problem!
	a = assemble;
}


Array& Array::operator = (Array& initial)
{
	
	/*if (temp.a != NULL)
	{
		delete[] temp.a;
	}*/
	this->SizeOfArray = initial.SizeOfArray;
	delete[] a;
	a = NULL;
	a = new int[this->SizeOfArray];
	for (int i = 0; i < initial.SizeOfArray; i++)
	{
		*(this->a + i) = *(initial.a + i);
	}
	return *this;
}

int& Array::operator[](int n)
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


Array& Array::operator + (Array& arr)
{
	
	/*if (temp.a != NULL)
	{
		delete[] temp.a;
		temp.a = NULL;
	}*/
	static Array temp;
	if (this->a != temp.a)
	{
		temp.append(*this);
	}
	temp.append(arr);
	return temp;
}


int Array::size()
{
	return SizeOfArray;
}

void Array::print()
{
	for (int i = 0; i < this->SizeOfArray; i++)
	{
		if (i == 0)
		{
			printf("\n");
		}
		printf("%d\n", *(a + i));
	}
	printf("the size is  %d", SizeOfArray);
	/*printf("the last number is %d\n", *add);
	printf("the last number is %d\n", *(a+SizeOfArray));*/

}

std::ostream& operator << (std::ostream& cout, Array& Input)
{
	for (int i = 0; i < Input.size(); i++)
	{
		if (i == 0)
		{
			cout << "[" <<Input[0]<<", ";
		}
		else if (i == Input.size() - 1)
		{
			cout <<Input[i] << "]" ;
		}
		else
		{
			cout <<Input[i] << ", ";
		}
	}
	return cout;
}

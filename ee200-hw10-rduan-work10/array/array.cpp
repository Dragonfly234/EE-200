#include "array.h"

// Not much to say here.  Good luck!

#include "array.h"
void Array::initialize(int size, int val)
{
	a = (int*)malloc(size* sizeof(int));
	for (int i = 0; i < size; i++)
	{
		*(a + i) = val;
	}
	SizeOfArray = size;
}
void Array::print()
{
	for (int i = 0; i < SizeOfArray; i++)
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
void Array::cleanup()
{
	
   if((this->assemble==NULL)&&(this->add==NULL))	
   {
	   free(this->a);
   }
	
	free(this->assemble);
	free(this->add);
	
}

int Array::size()
{
	return SizeOfArray;
}

void Array::append(int x)
{
	SizeOfArray++;
	add = (int*)malloc(SizeOfArray * sizeof(int));
	for (int i = 0; i < SizeOfArray; i++)
	{
		if (i == SizeOfArray - 1)
		{
			*(add + i) = x;
		}
		else
		{
			*(add + i) = *(a + i);
		}
	}
	free(this->a);
	a = add;
}

void Array::append(Array y)
{
	this->SizeOfArray = this->SizeOfArray + y.SizeOfArray;
	this->assemble = (int*)malloc(this->SizeOfArray * sizeof(int));
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
	free(this->a);
	a = assemble;
}

Array& Array::operator = (Array& initial)
{
	this->SizeOfArray = initial.SizeOfArray;
	free(this->a);
	a = (int*)malloc(initial.SizeOfArray * sizeof(int));
	for (int i = 0; i < initial.SizeOfArray; i++)
	{
		*(this->a+i) = *(initial.a + i);
	}
	return *this;
}

int &Array::operator[](int n)
{
	if (n >= this->SizeOfArray)
	{
		printf("error!");
		exit(0);
	}
	else
	{
		return *(this->a+n);
	}
}

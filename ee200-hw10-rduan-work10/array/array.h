#ifndef ARRAY_H
#define ARRAY_H
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class Array{
	int* a = NULL;
	int SizeOfArray = 0;
	int* add = NULL;
	int* assemble = NULL;
	int* AddArray = NULL;
public:
	void initialize(int size, int val);
    void print();
	void cleanup();
	int size();
	void append(int x);
	void append(Array y);
	Array& operator=(Array& initial);
	int &operator[](int n);
	/*Array(Array& initial)
	{
		SizeOfArray = initial.SizeOfArray;
		a = (int*)malloc(initial.SizeOfArray*sizeof(int));
		add = (int*)malloc(1*sizeof(int));
		assemble = a = (int*)malloc(sizeof(initial.assemble));
		for (int i = 0; i < initial.SizeOfArray; i++)
		{
			*(a + i) = *(initial.a+i);
		}
	}*/
};


#endif

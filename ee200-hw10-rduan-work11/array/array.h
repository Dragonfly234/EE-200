#ifndef ARRAY_H
#define ARRAY_H
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>

class Array{
    int*  a = NULL;
    int SizeOfArray = 0;
    int* assemble = NULL;
    int* add = NULL;
 
public:
    Array();
    Array(int length, int value);
    Array(int length, int* values);
    Array(Array& initial);
    ~Array()
    {
            delete[] this->a;     
    };
    

    
   friend std::ostream& operator << (std::ostream& cout,Array& Input);
    
    
    Array& operator+(Array& arr);
    void print();
    int size();
    void append(int x);
    void append(Array y);
    Array& operator=(Array& initial);
    int& operator[](int n);
};


#endif

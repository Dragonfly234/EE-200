#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
template <class T>
class LinkedList{
	class Node {
	public:
		T data;
		Node* Next;
		Node* Prev;
		Node()
		{
			data = 0;
			Next = NULL;
			Prev = NULL;
		}
		Node(T data, Node* Next, Node* Prev)
		{
			this->data = data;
			this->Next = Next;
			this->Prev = Prev;
		}
	};
	Node* Head;
	Node* Tail;
	int SizeofList;
	
	T getItem(int n, Node* temp)
	{
		T ans;
		if (n == 0)
		{
			 ans=temp->data;
			 return ans;
		}
		else
		{
			temp = temp->Next;
			ans=getItem(n - 1, temp);
		}
		return ans;
	}


	Node* AddBack(T* data)
	{
		Tail = new Node(*data, NULL, Tail);
		if (this->Head == NULL)
		{
			Head = Tail;
			SizeofList++;
			return Tail;
		}
		else
		{
			Tail->Prev->Next = Tail;
			SizeofList++;
			return Tail;
		}
	}

	void remove(int pos, Node* Head)//////////////////////////////////
	{
		 
		if (pos == 0)
		{
			
				Head->Prev->Next = Head->Next;
				Head->Next->Prev = Head->Prev;
				delete Head;
			
			
		}
		else
		{
			Head = Head->Next;
			remove(pos -1, Head);
		}
	}
	void insertData(T x, int pos,Node*temp)
	{
		if (pos == 0)
		{
			Node *temp_2=new Node(x, temp, temp->Prev);
			temp->Prev->Next = temp_2;
			temp->Prev = temp_2;
		}
		else
		{
			insertData(x, pos - 1,temp->Next);
		}
	}
public:
	LinkedList() :Head(NULL), Tail(NULL), SizeofList(0) {}
	LinkedList(int length, T* values);
	LinkedList(LinkedList<T>& Copy);
	void print();
	void insert(T x, int pos);
	void remove(int pos);
	LinkedList<T>& operator=(LinkedList& initial);
	~LinkedList()
	{
		while (this->Head != NULL)
		{
			Node* temp = this->Head->Next;
			delete Head;
			Head = temp;
		}
	}
	int size()
	{
		return this->SizeofList;
	}

	Node* AddBack(T data)
	{
		Tail = new Node(data, NULL, Tail);
		if (this->Head == NULL)
		{
			Head = Tail;
			SizeofList++;
			return Tail;
		}
		else
		{
			Tail->Prev->Next = Tail;
			SizeofList++;
			return Tail;
		}
	}

	T getItem(int n)
	{
		if (n >= this->SizeofList)
		{
			return 0;
		}
		return getItem(n, Head);	
	}
};


template <class T>
LinkedList<T>& LinkedList<T>::operator=(LinkedList& initial)
{
	if (this->Head == initial.Head)
	{
		return *this;
	}
	for (int i = 0; i < initial.size(); i++)
	{
		if (i == 0)
		{
			while (this->Head != NULL)
			{
				Node* temp = this->Head->Next;
				delete Head;
				Head = temp;
				SizeofList = 0;
			}
			Head = AddBack(initial.getItem(i));
		}
		else if (i == initial.size() - 1)
		{
			Tail = AddBack(initial.getItem(i));
		}
		else
		{
			AddBack(initial.getItem(i));
		}
	}
	return *this;

}

template <class T>
void LinkedList<T>::remove(int pos)
{
	if ((Head == NULL)||(pos>SizeofList))
	{
		return;
	}
	else
	{
		if (pos == 0)
		{
			Node* temp = Head->Next;
			Head->Next->Prev = NULL;
			delete Head;
			Head = temp;
			SizeofList--;
		}
		else if (pos == SizeofList-1)
		{
			Node* temp = Tail->Prev;
			Tail->Prev->Next=NULL;
			delete Tail;
			Tail = temp;
			SizeofList--;
		}
		else
		{
			remove(pos, Head);
			SizeofList--;
		}
	}

}
template <class T>
void LinkedList<T>::insert(T x, int pos)/////////
{


		if (Head == NULL)
		{
			Head = new Node(x, NULL, NULL);
			Tail = Head;
			SizeofList++;
		}
		else
		{
			if (pos == 0)
			{
				Node* temp = new Node(x, NULL, NULL);
				temp->Next = Head;
				Head->Prev = temp;
				Head = temp;
				SizeofList++;
			}
			else if (pos == SizeofList)
			{
				Tail = AddBack(x);
			}
			else
			{
				insertData(x, pos,Head);
				SizeofList++;
			}
		}
	
}



template <class T>
LinkedList<T>::LinkedList(LinkedList<T>& Copy)
{
	
	if (Copy.Head == NULL)
	{
		Head = NULL;
		Tail = NULL;
		SizeofList = 0;
	}
	else
	{
		Head = NULL;
		Tail = NULL;
		SizeofList = 0;
		for (int i = 0; i < Copy.size(); i++)
		{
			if (i == 0)
			{
				this->Head = AddBack(Copy.getItem(i));
			}
			else
			{
				this->Tail = AddBack(Copy.getItem(i));
			}

		}
	}
	
}



template <class T>
void LinkedList<T>::print()
{
	
	if (Head == NULL)
	{
		printf("Head is a NULLprt!\n");

		if (Tail == NULL)
		{
			printf("Tail is a NULLprt!\n");
			return;
		}
	}
	else
	{
		for (int i = 0; i < this->SizeofList; i++)
		{
			std::cout << "The " << i << "th number element is " << this->getItem(i) << '\n';
		}
		std::cout << "The " << "the Head data is " << this->Head->data << '\n';
		std::cout << "The " << "the Tail data is " << this->Tail->data << '\n';
		printf("the size is  %d\n", this->size());
	}
	
}


template <class T>
LinkedList<T>::LinkedList(int length, T* values) 
{
	 Head=NULL;
	 Tail=NULL;
	 SizeofList=0;
	
	for (int i = 0; i < length; i++)
	{
		if (i == 0)
		{
			this->Head = AddBack((values + i));
		}
		else if (i == (length-1))
		{
			this->Tail =AddBack((values + i));

		}
		else
		{
			AddBack((values + i));
		}
	}
}




#endif

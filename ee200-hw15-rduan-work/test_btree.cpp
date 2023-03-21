#include <cstdio>
#include <assert.h>
#include "btree.h"
#include <climits>



int main(int argc, char* argv[])
{
	BTree A;//page453
	A.remove(100);
	assert(A.size() == 0);
	A.add(55);
	A.add(20);
	A.add(74);
	A.add(99);
	A.add(99);
	A.add(99);
	A.add(99);
	assert(A.size() == 4);
	A.add(5);
	A.add(43);
	A.add(12);
	A.add(32);
	A.add(49);
	assert(A.contains(55) == 1);
	assert(A.contains(20) == 1);
	assert(A.contains(74) == 1);
	assert(A.contains(99) == 1);
	assert(A.contains(5) == 1);
	assert(A.contains(43) == 1);
	assert(A.contains(12) == 1);
	assert(A.contains(32) == 1);
	assert(A.contains(49) == 1);
	assert(A.size() ==9 );
	int* arrayA = A.toArray();
	int Aarray[9] = {5,12,20,32,43,49,55,74,99};
	for (size_t i = 0; i < A.size(); i++)
	{
		assert(*(arrayA + i) == Aarray[i]);
		
	}
	delete [] arrayA;
	arrayA = NULL;
	A.remove(43);
	A.remove(43);
	assert(A.contains(43) == 0);
	BTree B=A;
	assert(A.size() == B.size());
	assert(B.contains(32) == 1);
	A.remove(32);
	assert(B.contains(32) == 1);

	
	BTree C;
	C = A;
	assert(A.size() == C.size());
	assert(C.contains(74) == 1);
	A.remove(74);
	assert(C.contains(74) == 1);
	A.remove(100);

	BTree D;
	int* arrayD = D.toArray();
	assert(arrayD == NULL);
	assert(D.mRoot == NULL);
	D.add(55);
	D.add(20);
	D.add(74);
	D.add(99);
	D.add(5);
	D.add(43);
	D.add(12);
	D.add(32);
	D.add(49);
	assert(D.mRoot->left->right->right->right == NULL);
	assert(D.mRoot->left->right->right->left == NULL);
	D.remove(49);
	assert(D.mRoot->left->right->right == NULL);

	BTree multi;
	for (int i = -50; i < 100; i++) {
		multi.add(i);
		assert(multi.contains(i));
	}
	int* multiArr = multi.toArray();


	BTree AssignMyself;
	AssignMyself.add(1);
	AssignMyself.add(2);
	assert(AssignMyself.contains(1) == 1);
	AssignMyself = AssignMyself;
	assert(AssignMyself.contains(2) == 1);
  printf("Test passed!\n");
  return 0;
}


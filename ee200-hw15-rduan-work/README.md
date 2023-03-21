EE 200 Homework 15

# Overview
This assignment is the reverse of most that you've written so far: I have written some implementations of a binary search tree (for integers), and you will write the tests.  Your job is to figure out which of the 9 implementations actually does what is described in the header file `btree.h`.  Bonus points will be awarded if you come up with a test that breaks all of them (i.e., you find a real bug in my code).

You can use the provided Makefile to compile your code and run all your tests.

# Submission
Zip up your `hw15` directory and submit it via `provide` as `hw15`.  It is due Friday 12/11 at 11:59pm.
You can use the following command to zip up the directory:
    zip -r hw15 hw15/*

# Problem
For each of the 9 implementations, write a 1-sentence description of what the implementation is doing wrong, or how you found that it is broken.

1.For btree1, the void "add(int value)" cannot work normally. When I try "A.add(55);", I found "Assertion `A.contains(55) == 1' failed.".
2.For btree2, I did not find problem.
3.For btree3, the copy constructor does not finish a deep-copy process. Because I do "BTree B=A;" then do "A.remove(32);", I found " Assertion `B.contains(32) == 1' failed."
  means that the copy constructor did not make a deep copy. And the overload of "=" in btree3 has same problem. when I delete code mentioned above, I try
  "	BTree C;C = A;" then "A.remove(74);" I found " Assertion `C.contains(74) == 1' failed."
4.For btree4, the copy constructor of it has same problem as that of btree3.
5.For btree5, the function remove(int value) has problems. When I try to remove node which has two children. I cannot remove it. 
6.For btree6, the function remove(int value) has problems. when I try to remove the value which is not exist in the tree, the segmentation fault happed.
7.For btree7, the function remove(int value) cannot remove node.
8.For btree8, when I try to add 150 nodes, betree8 failed to add the node. what I do is
       BTree multi;
	  for (int i = -50; i < 100; i++) {
		multi.add(i);
		assert(multi.contains(i));
	        }
			I found that "Assertion `multi.contains(i)' failed."
 
9.For btree9, the copy constructor has problem. Because when I do:
    BTree AssignMyself;
	AssignMyself.add(1);
	AssignMyself.add(2);
	assert(AssignMyself.contains(1) == 1);
	AssignMyself = AssignMyself;
	assert(AssignMyself.contains(2) == 1);
	I found that "Assertion `AssignMyself.contains(2) == 1' failed."
	the AssignMyself tree is broken.

In addition to finding the errors, you'll be graded on the overall quality of your test code.  Submit all of the test code that you write!


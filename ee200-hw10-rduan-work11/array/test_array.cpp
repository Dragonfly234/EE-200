#include "array.h"
#include <cstdio>

int main(int argc, char* argv[])
{
 
   int test1[5] = { 1,2,3,4,5 };
   int test2[5] = { 1,2,3,4,5 };
   int test3[5] = { 1,2,3,4,5 };
  Array arr(5,test1);
  Array result(6, 6);
  //arr.print();
  Array rtoo(5,test2);
  Array third(5, test3);

  rtoo.append(8);
   rtoo.append(arr);
  rtoo = arr;
   rtoo.print();
  result = rtoo+arr+arr+arr;
  std:: cout << result<<arr;

 
  for(int i = 0; i < arr.size(); i++){
    arr[i] = i * 2;
  }
  for(int i = 0; i < arr.size(); i++){
    printf(" arr[%d] = %d\n", i, arr[i]);
  }
  for(int i = 0; i < rtoo.size(); i++){
    printf("rtoo[%d] = %d\n", i, rtoo[i]);
  }
  return(0);
}


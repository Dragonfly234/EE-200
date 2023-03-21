#ifndef PROBLEM4_H
#define PROBLEM4_H
#include<stdio.h>
typedef struct {
  double x;
  double y;
} Point;

typedef struct {
  Point a;
  Point b;
  Point c;
} Triangle;

Triangle getLarger(Triangle first, Triangle second);

#endif

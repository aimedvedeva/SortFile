#include <iostream>
#include <stdio.h>
#include <string.h>
#include "sort.h"
#include "power.h"

#define MAX(x, y, r) {int n = (x); int i = (y); r = (((n)>(i))?(n):(i));}/* присвойте в r максимум из x и y */

//O(log n),S(1)
int BinrySearch(int a[], int size, int num){
  int ls = 0;
  int rs = size;
  int index = (rs - ls) / 2 + ls;

  while (index >= 0 && index < size){

    index = (rs - ls) / 2 + ls;

    if (a[index] > num){
      rs = index - 1;
    }
    else if (a[index] < num){
      ls = index + 1;
    }
    else if (a[index] == num){
      return index;
    }
  }
  return size + 1;
}
int main(void){

 
  return 0;
}


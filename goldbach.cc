#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

void goldbach(int num)
{
  int fac=2;
  if ( 1 == num)
  {
    cout<<endl;
    return ;
  }
  while ( 0!=num%fac )
    fac++;
  cout<<fac<<"*";
  goldbach(num/fac);
}

int main() 
{
  goldbach(12321);
  goldbach(12325);
  goldbach(12320);
  return 0;
}

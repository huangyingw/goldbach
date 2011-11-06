#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

void dividePrime(int num)
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
  dividePrime(num/fac);
}

int main() 
{
  dividePrime(12321);
  dividePrime(12325);
  dividePrime(12320);
  return 0;
}

#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

int goldbach(int num)
{
  bool isPrime=true;
  int k=0;
  for (int i=2;i<=num/2;i++)
  {
    isPrime=true;
    k=num-i;
    if (0==i%2)
    {
      isPrime=false;
      continue;
    }
    if (0==k%2)
    {
      isPrime=false;
      continue;
    }
    for (int j=3;j*j<=i;j=j+2)
    {
      if (0==i%j)
      {
        isPrime=false;
        break;
      }
    }
    for (int j=2;j*j<=k;j=j+2)
    {
      if (0==k%j)
      {
        isPrime=false;
        break;
      }
    }
    if(isPrime)
      cout<<i<<"+"<<k<<endl;
    else
    {
      continue;
    }
  }
}

int main() 
{
  goldbach(10);
  goldbach(100);
  goldbach(42824320);
  goldbach(42482358);
  return 0;
}

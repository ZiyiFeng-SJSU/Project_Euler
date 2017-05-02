/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool is_prime(unsigned long long);

int main()
{
  int number = 1;
  vector<unsigned long long> prime;
  while(prime.size() < 10002)
  {
    if (is_prime(number))
      prime.push_back(number);
    ++number;
  }
  cout << "10001st prime is " << prime.back() << endl;
}
bool is_prime(unsigned long long n)
{
  unsigned long long i,sq,count=0;

  if(n==1 || n==2)
   return true;
  if(n%2==0)
   return false;

  sq=sqrt(n);
  for(i=2;i<=sq;i++)
  {
    if(n%i==0)
      return false;  
  }
  return true;
}


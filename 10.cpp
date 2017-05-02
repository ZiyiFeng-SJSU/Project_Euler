/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million. */

#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(unsigned long long);
int main ()
{
  unsigned long long sum = 0;
  for (unsigned long long i = 2; i < 2000000; ++i)
    if (is_prime(i))
      sum += i;
  cout << "Sum = " << sum << endl;
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

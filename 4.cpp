/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool is_palindrome(unsigned long long);
bool is_prime(unsigned long long);


int main()
{
  vector<unsigned long long> p;
  for (unsigned long long i = 10000; i < 998002; i++)
    if(is_palindrome(i))
      if(!is_prime(i))
        p.push_back(i);

  cout << "Maximum palindrome in the scope: " << p.back() << endl;
  cout << "Size = " << p.size() << endl;

  bool flag = false;
  for (vector<unsigned long long>::iterator it = p.end() ; it != p.begin(); --it)
  {
    for (int i = 100; i < 1000; ++i)
    { 
      if (*it%i == 0 && *it != 0)
      {
        cout << "Result = " << *it << endl;
        cout << "Factor = " << i << " and " << *it/i << endl;
        if (*it/i < 1000)
        {
          flag = true;
          break;
        }
        else
          continue;
      }
    }
    if (flag) break;
  }
}

bool is_palindrome(unsigned long long obverse)
{
  unsigned long long reverse = 0;
  unsigned long long number = obverse;
  while(number)
  {
   reverse = reverse * 10 + number % 10; 
   number = number / 10; 
//cout << "reverse = " << reverse << endl;
  }

  if (obverse == reverse)
    return true;
  else 
    return false;
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

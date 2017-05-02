/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool is_prime(int);

int main()
{
  vector<int> factor;

  for (int i = 2; i < 21; ++i)
  {
    if (is_prime(i))
      factor.push_back(i);
    else
    {
      vector<int> x = factor;
      int temp = i;
      while(x.size() > 0)
      {
        if (temp % x.back() == 0)
          temp = temp/x.back();
        x.pop_back();
      }
      if (temp != 1)
        factor.push_back(temp);
    }
  }
//cout << "Size = " << factor.size() << endl;

  int result = 1;
  while (factor.size())
  {
    result = result * factor.back();
    cout << "factor= " << factor.back() << endl;
    factor.pop_back();
  }
    cout << "Result= " << result << endl;
}

bool is_prime(int n)
{
  int i,sq,count=0;

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

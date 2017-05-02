/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.*/

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
  int a;
  for (int i = 1; i < 501; ++i)
  {
    for (int j = 501-i; j < 1001 - i; ++j)
    {
      double c =sqrt(i*i + j*j);
      if (c == floor(c))
      {
        int addition = c + i + j;
     //   cout << "addition = " << addition << endl;
        if(addition == 1000)
        {
          unsigned long long result = i*j*c;
          cout << "i = " << i << "; j = " << j << "; c = " << c << endl;
          cout << "Result = " << result << endl;
        }
      }
    }
  }

  
}
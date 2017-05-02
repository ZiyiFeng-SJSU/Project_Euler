#include <iostream>
using namespace std;
int Fibonacci(int);
int main()
{
  int result = 0;
  int i;

  for (i = 0; Fibonacci(i) <= 4000000; i++)
  {
 //   cout << "Fibonacci: " << Fibonacci(i) << endl;
    if (Fibonacci(i)%2 == 0)
      result = result + Fibonacci(i);
  }
  cout << "Result = " << result << endl;

}

int Fibonacci(int initial)
{
  if (initial == 0)
    return 0;
  else if (initial == 1)
    return 1;
  else
    return (Fibonacci(initial - 1) + Fibonacci(initial - 2));
}
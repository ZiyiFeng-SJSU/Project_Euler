#include <iostream>
#include <cmath>
#include <vector>
#include <ctime>

using namespace std;

bool is_prime(unsigned long long);
int main()
{
  unsigned long long number = 600851475143;
  long long num = 13195;
  vector<unsigned long long> prime;

  clock_t startTime = clock();

  unsigned long long i;

  int counter = 0;
  for(i = 2; i < number; i++)
  {
 //   cout << "i " << i << endl;

    if(is_prime(i))
    {
      cout << " " << i;
     
      while(number%i == 0)
      {
        prime.push_back(i);
        cout << "Prime factor: " << i << endl;
        number = number/i;
        prime.push_back(number);

        //break;
      }
    }
    counter++;
  }
  double elapsedSeconds = (double)(clock() - startTime) / CLOCKS_PER_SEC;

  cout << "\nCounter " << counter << endl;

  cout << "\nMax Prime is " << prime.back() << endl;
  cout << "RUN TIME: " << elapsedSeconds << endl;
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

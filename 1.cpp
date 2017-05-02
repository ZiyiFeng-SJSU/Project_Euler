#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int max = 1000;
	int sum = 0;
	int i,j;
	for (i = 1; i < max; i++)
	{
		
		if (i%3 == 0)
			sum = sum + i;

		else if(i%5 == 0)
			sum = sum + i;

//		cout << "i = " << i << " Sum = " << sum << endl;
	}
	cout << "Final Sum = " << sum << endl;
}
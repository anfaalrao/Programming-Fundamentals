#include <iostream>
using namespace std;
int main()
{
	cout<< "Name:Anfal Rao, BS Artificial Intelligence, Section A:";
	int n,i,digit, sum=0;
	long long factorial=1;
	
	cout<< "Enter a non-negative integer:";
	cin>> n;
	
	if (n<0)
	{
		cout<< "please enter a non-negative integer.";
		return 0;
	}
	for (i=1; i <=n; i++)
	{
		factorial = factorial*i;
	}
	int temp=n;
	while (temp>0)
	{
		digit=temp%10;
		sum=sum+digit;
		temp=temp/10;
	}
	cout<< "Factorial=" << factorial << endl;
	cout<< "Sum of digits=" << sum << endl;
	
	return 0;
}

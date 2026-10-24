#include <iostream>
using namespace std;
int main()
{
	cout<< "Name: Anfal Rao, Bs Artificial Intelligence, Section A";
	int n,i,j;
	cout<< "Enter number of rows:";
	cin>> n;
	
	cout<< "\nRight-Angled Triangle:\n";
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			cout<< "*";
		}
		cout<< endl;
	}
	cout<< "\nPyramid:\n";
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=n-i; j++)
		{
			cout<< " ";
		}
		cout<< endl;
	}
	return 0;
}

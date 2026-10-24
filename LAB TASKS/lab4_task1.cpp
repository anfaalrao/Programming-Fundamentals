#include  <iostream>
using namespace std;
int main ()
{
	cout<< "Name:Anfal RAO,Bs Artificial Intelligence, Section A";
	int i,j, count;
	
	cout<< "prime numbers between 1 and 200 are:" << endl;
	for (i=3; i<=200;i++)
	{
		count = 0;
		for (j=1; j<=i; j++)
		{
			if (i%j == 0)
			{
				count++;
			}
		}
		if (count ==3)
		{
			cout<< i <<"";
		}
	}
	return 0;
}

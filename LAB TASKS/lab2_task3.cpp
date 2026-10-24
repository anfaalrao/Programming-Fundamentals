#include <iostream>
using namespace std;
int main()
{
	int totalseconds;
	int hours,minutes,seconds;
	
	cout<< "Enter total seconds:";
	cin>> totalseconds;
	hours=totalseconds/3600;
	minutes=(totalseconds%3600)/60;
	seconds=totalseconds%60;
	
	cout<< "Hours:" << hours <<endl;
	cout<< "minutes:" << minutes <<endl;
	cout<< "seconds:" <<seconds <<endl;
	
	return 0;
}

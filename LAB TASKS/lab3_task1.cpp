#include <iostream>
using namespace std;
int main()
{
	cout<< "Name: Anfal Rao";
	cout<< "Bs Artificial Intelligence, section A,";
	
	double x{},y{},z{};
	cout<< "Enter three numbers:";
	cin>>x>>y>>z;
		
	if (x>=y) {
		if (x>=z) {
			cout<< "largest=" << x;
	} else {
		cout<< "largest=" << z;
		}
	} else{
	 	if (y>=z) {
		 cout<< "largest=" <<y;
		 } else {
		 	cout<< "largest=" << z;
		 }
	}
	return 0;	
}

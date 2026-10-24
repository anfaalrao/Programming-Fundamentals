#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout<< "Name:Anfal Rao,Bs Artificial Intelligence, Section A";
	double celcius, fahrenheit, kelvin;
	
	cout<< "Enter temperature in celcius:";
	cin>> celcius;
	
	fahrenheit=(celcius*9.0/5.0)+32;
	kelvin=celcius+273.15;
	
	cout<< fixed << setprecision(2);
	cout<< "Temperature in Fahrenheit:" << fahrenheit << endl;
	
	cout<< "Temperature in kelvin:" << kelvin << endl;
	
	return 0;
}

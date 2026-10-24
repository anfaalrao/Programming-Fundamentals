#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout<< "Name:Anfal Rao, Bs Artificial Intelligence, section A";
	const double SQ_METRES_PER_KANAL = 505.857;
	double length,width,area,kanals;
	
	cout<< "Enter the length of the field in metres:";
	cin>> length;
	
	cout<< "Enter the width of the field in metres:";
	cin>> width;
	
	area= length*width;
	kanals= area/SQ_METRES_PER_KANAL;
	
	cout<< fixed << setprecision(2);
	cout<< "Area in square meters:" << area << "m^2" << endl;
	cout<< "Area in kanals:" << kanals << endl;
	
	return 0;
}

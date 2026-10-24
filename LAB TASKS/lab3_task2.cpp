#include <iostream>
using namespace std;
int main()
{
	cout<< "Name:Anfal Rao,Bs Artificial Intelligence, Section A";
	int marks;
	
	cout<< "Enter marks (0-60):";
	cin>> marks;
	
	if(marks>=0)
		if(marks<=60){
			if(marks>=50){
				cout<< "Grade:A+";
			}else if(marks>=40){
				cout<< "Grade:A";
			}else if(marks>=30){
		      	cout<< "Grade:B";
	        }else if(marks>=20){
	        	cout<< "Grade:C";
			}else{
				cout<< "Grade:F";
			}
		}else{
			cout<< "Invalid marks!";
		}
		return 0;
	}
	

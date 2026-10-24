#include <iostream>
using namespace std;
int main()
{
	cout<< "Name:Anfal Rao,Bs Artificial Intelligence,Section A";
	double x,y;
	char op;
	
	cout<< "Enter first number:";
	cin>> x;
	cout<< "Enter operator (+,-,*,/):";
	cin>> op;
	cout<< "Enter second number:";
	cin>> y;
	switch (op){
		case '+':
			cout<< "Result=" << x+y;
			break;
			case '-':
				cout<< "Result=" << x-y;
				break;
				case '*':
					cout<< "Result=" << x*y;
					break;
					case '/':
						if(y!=0){
							if(y>0){
								cout<< "Result=" << x/y;
							}
						}else{
							cout<< "Error:Division by zero!";
						}
						break;
						
						default:
							cout<< "Invalid operator!";
							break;
	}
	return 0;
}

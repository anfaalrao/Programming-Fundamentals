#include <iostream>
using namespace std;
int main()
{
	cout<< "Name:Anfal Rao, BS Artificial Intelligence, section A,";
	int secretNumber=27;
	int guess;
	int attempts=0;
	
	cout<< "Welcome to the Number Guessing Game!" << endl;
	cout<< "Guess a number between 1 and 100." << endl;
	cout<< "You have only 7 attempts." << endl;
	
	while (attempts <7)
	{
		cout<< "\nEnter your guess:";
		cin>> guess;
		attempts++;
		if (guess== secretNumber)
		{
			cout<< "Congratulations! You guessed correctly." << endl;
			cout<< "Attempts used:" << attempts << endl;
			return 0;
		}
		else if (guess < secretNumber)
		{
			cout<< "Too low! Try a higher number." << endl;
		}
		else
		{
			cout<< "Too high! Try a lower number." << endl;
		}
		cout<< "Attempts remaining:" << 7-attempts << endl;
	}
	cout<< "\nGame over! You used all 7 attempts." << endl;
	cout<< "The correct number was:" << secretNumber << endl;
	
	return 0;
}

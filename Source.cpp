#include <iostream>
#include <ctime>
#include <string>

using namespace std;

void roll();
char rollAgain();

int main()
{
	roll();
	rollAgain();
}

void roll()
{
	string diceSide;
	string side[] = { "one", "two", "three", "four", "five", "six" };
	srand((unsigned int)time(NULL));
	diceSide = side[rand() % 6];
	cout << "dice rolled: " << diceSide << endl;
}

char rollAgain()
{
	char choice;
	cout << "Would you like to roll again?" << endl;
	cout << "Yes(Y) or No(N)" << endl;
	cin >> choice;
	if (choice == 'Y')
	{
		roll();
	}
	else
	{
		cout << "Thanks for using me!" << endl;
	}
	do
	{
		rollAgain();
	} while (choice == 'Y');

	return choice;
}

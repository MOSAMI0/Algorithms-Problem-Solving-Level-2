#include<iostream> //#13/2
#include<string>
#include<cmath>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);


	return Number;


}

void PrintNumberPattern(int Number)
{
	cout << endl;

	for (int i = 1; i <= Number; i++)
	{
		
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}

int main()
{
	PrintNumberPattern(ReadPositiveNumber("Please enter a number? "));
	
	return 0;
}
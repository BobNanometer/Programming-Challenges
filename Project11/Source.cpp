#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
using namespace std;

//Globals
const int NUM_INPUTS = 5;
int inputNumbers[NUM_INPUTS];
//Function Headers

//Clears the terminal
void ClearTerminal()
{
	system("cls");
}
//Gets X numbers from the user
void GetNumbers()
{
	//Strings
	const string INTRO_PROMPT = "Enter five numbers to generate a report.";
	const string ENTER_NUM_PROMPT = "Enter a number:";
	cout << INTRO_PROMPT << endl;
	for (int i = 0; i < NUM_INPUTS; i++)
	{
		cout << ENTER_NUM_PROMPT;
		cin >> inputNumbers[i];
	}
	
}
//Returns the average of the contents of the array
int AverageNumbers()
{
	//Holds the average of the array
	int arrayAverage = 0;
	int arraySum = 0;
	//Calculates sum and then average
	for (int i = 0; i < NUM_INPUTS; i++)
	{
		arraySum = arraySum + inputNumbers[i];
		if (i == (NUM_INPUTS-1))
		{
			arrayAverage = arraySum / NUM_INPUTS;
		}
	}
	return arrayAverage;

}

int main()
{
	//Strings
	string AVG_PROMPT = "The average of your numbers is ";
	//Get the numbers
	GetNumbers();
	//Average the numbers
	cout << AVG_PROMPT << AverageNumbers() << endl;
	//Pause
	system("pause");
	return 0;
}
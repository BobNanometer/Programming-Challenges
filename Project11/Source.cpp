#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Globals
const int NUM_INPUTS = 5;
int inputNumbers[NUM_INPUTS];
//Function Headers
void GetNumbers()
{
	//Strings
	const string INTRO_PROMPT = "Enter five numbers to generate a report.";
	const string ENTER_NUM_PROMPT = "Enter a number:";
	cout << INTRO_PROMPT;
	for (int i = 0; i < NUM_INPUTS; i++)
	{
		cout << ENTER_NUM_PROMPT;
		cin >> inputNumbers[i];
	}
	cout << ENTER_NUM_PROMPT;
}
#pragma once
#include<iostream>;
#include<string>
using namespace std;

int EnterOnlyNumber() {
	int Number = 0;
	cout << "pls neter a Number:" << endl;
	cin >> Number;


	while (cin.fail()) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "enter only Number :" << endl;
		cin >> Number;
	}

	cout << "the Number is :" << endl;


	return Number;





}

// if you want to change all latter to small latter or capital latter in string use those functions
string PrintAllCapetalLatter(string Answer) {



	for (short i = 0; i < Answer.length(); i++)
	{
		Answer[i] = toupper(Answer[i]);
	}
	return Answer;






}
string PrintAllSmallLatter(string Answer) {

	for (short i = 0; i < Answer.length(); i++)
	{

		Answer[i] = tolower(Answer[i]);
	}
	return Answer;
}

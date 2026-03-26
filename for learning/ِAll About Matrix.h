#pragma once
#include <iostream>
#include <string>
#include<iomanip>
#include<cctype>
#include<vector>

using namespace std;
int RandomNumber(int From, int To)
{ //Function to generate a random number
	int randNum = rand() % (To - From + 1) + From; return randNum;
}


int SumOfMetrix(int Metrix[3][3], short Cols, short Rows) {

	int Sum = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {


			Sum += Metrix[i][i];


		}





	}

	return Sum;
}
bool IsNumberInMetrix(int Metrix1[3][3], int Number, short Cols, short Rows) {


	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {

			if (Metrix1[i][j] == Number) {
				return true;
			}
		}
	}
	return false;
};
bool IsSparcMatrix(int Metrix1[3][3], int Number, short Cols, short Rows) {
	int MatrixSize = Cols * Rows;
	return(IsNumberInMetrix(Metrix1, 0, 3, 3) >= MatrixSize / 2);
}
bool IsPlandromeMatrix(int Metrix[3][3], short Cols, short Rows) {

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {

			if (Metrix[i][j] != Metrix[i][Cols - 1 - j]) {
				return false;
			}
		}
	}

	return true;
}
void FallMetrixWithRandomNumbers(int Metrix[3][3], short Cols, short Rows) {


	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {

			Metrix[i][j] = RandomNumber(1, 100);
		}
	}







}
void PrintMetrix(int Metrix[3][3], short Cols, short Rows) {


	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {


			printf("%0*d", 2, Metrix[i][j]);
			cout << "  ";


		}


		cout << endl;


	}







}
bool CheakMetrixPosition(int Metrix1[3][3], int Metrix2[3][3], short Cols, short Rows) {
	
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {

			if (Metrix1[i][j] != Metrix2[i][j]) {
				return false;
			}
		}
	}
	return true;
}
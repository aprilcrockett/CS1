/*
	Title:   coutexample.cpp
	Module:  2
	Author:  April R Crockett
	Date:    June 27 2022
	Purpose: To demonstrate basic output including 
	         continuous stream, endlines, escape sequences
			 like the newline.
*/
#include <iostream>
using namespace std;

int main()
{
	int num = 7;
	cout << num;
	cout << "\nThe value of num is " << num;
	cout << endl;
	cout << "Crockett\'s 1300 class";
	cout << "what\'s up?";
	cout << endl;  //endline
	cout << "\n";	//newline
	cout << "Hi";
	cout << "on";
	cout << "different";
	cout << "lines";
	cout << "Hi\ton\ndifferent\nlines\nfor\nreal\n";
	cout << "Another " << num << " example" << endl;
	
	return 0;
}










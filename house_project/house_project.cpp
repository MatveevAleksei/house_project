// house_project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int main()
{
	
	char ch = 'x';
	int j = 77;
	double d = 6.02;
	string str1 = "KAFKA";
	string str2 = "MALAFKA";
	ofstream fout("data.txt");

	fout << setw(5) << ch
		<< setw(5)<< j
		<< setw(5)<< d
		 << setw(5)<<str1
		<<setw(5) << str2;
	cout << "Good";
	getchar();
    return 0;
}


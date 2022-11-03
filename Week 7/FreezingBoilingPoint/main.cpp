/*
Name: Micah H

Program: FreezingBoilingPoint

Description: This tool allows a user to enter a temp in (F) and will check if Ethyl alcohol, Mercury, Oxygen and Water are boiling or freezing at that temp.
*/
#include <iostream>
using namespace std;
int main()
{
	int temp;
  //Delcare char variables, we will use them in a switch statement
	char freeze, boil;
	cout << "This tool will return if the temp has reached the freezing or boiling points of Ethyl alcohol, Mercury, Oxygen and Water.\n" << "Enter a temp(in F) you would like to check: ";
	cin  >> temp;
	if (temp <= -362)
		freeze = 'O';
	else if (temp < -306)
		freeze = 'E';
	else if (temp <= -173)
	{
		freeze = 'E';
		boil = 'O';
	}	
	else if (temp <= -38)
	{
		freeze = 'M';
		boil = 'O';
	}	
	else if (temp <= 32)
	{
		freeze = 'W';
		boil = 'O';
	}	
	else if (temp > 32 && temp < 172)
		boil = 'O';	
	else if (temp >= 676)
		boil = 'M';
	else if (temp >= 212)
		boil = 'W';	
	else if (temp >= 172)
		boil = 'E';	
	//Switch statement for freezing
	switch(freeze)
	{
		case 'O' : cout << "Oxygen, ";
		case 'E' : cout << "Ethyl alcohol, ";
		case 'M' : cout << "Mercury and ";    
		case 'W' : cout << "Water will freeze. ";
	}
  //Switch statement for boiling
	switch(boil)
	{
		
		case 'M' : cout << "Mercury, ";
		case 'W' : cout << "Water, ";
		case 'E' : cout << "Ethyl alcohol and ";
		case 'O' : cout << "Oxygen will boil ";
	}
	cout << "at " << temp << "(F).";
  //End program
	return 0;	
}
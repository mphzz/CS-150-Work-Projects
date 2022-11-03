/*
Dev: Micah Hacker
Program: Interview Program Micah Hacker
Desc: 
Start program
Ask for name
Get and store name
Ask for age
Get and store age
Ask birthdate
Get and store birthdate
Ask how many classes they're taking
Get and store class data
Ask how many credits they need to graduate
Get and store credits needed
Ask for their fav movie
Get and store fav movie
Ask for their fav food
Get and store fav food
Print all items on separate lines
*/
#include <iostream>
using namespace std;

int main() 
{
//Declare varaibles
string name, dob, favMovie, favFood;
int age, classesEnrolled;
double creditsNeeded;
//Prompt user
cout << "Whats your name student? ";
//Store data
cin >> name;
//Prompt user
cout << "How old are you? ";
//Store data
cin >> age;
//Prompt user
cout << "Whats your date of birth? ";
//Store data
cin >> dob;
//Prompt user
cout << "How many classes are you enrolled in this semester? ";
//Store data
cin >> classesEnrolled;
//Prompt user
cout << "How many more credits do you need to graduate? ";
//Store data
cin >> creditsNeeded;
//Prompt user
cout << "Whats your favorite movie? ";
//Store data
cin >> favMovie;
//Prompt user
cout << "Whats your favorite food? ";
//Store data
cin >> favFood;
//Print all data
cout << "~~~~~~~~\nStudent data:\nName: " << name << "\nAge: " << age << "\nDate of Birth: " << dob << "\nClasses enrolled in: " << classesEnrolled << "\nCredits needed to graduate: " << creditsNeeded << "\nFavorite movie: " << favMovie << "\nFavorite Food: " << favFood << "\n~~~~~~~~";
  
}
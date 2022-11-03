/*----------------------------------------------------------------------------
* Program Name: FileReadWrite
* Programmer: Kavita Patel
* Description: This program demonstrates how to 
			   Read and Write to and from a text 
			   file in C++. It uses new preprocessor
			   directive that has to be included to
			   use the file streams.
			   The first half of the code is reading 
			   from a file and displaying content to the console.
			   The second half of the code is interactive,
			   asking the user for the input, reading it 
			   and then writing it to the file and displaying 
			   it to the console.
* Date: 2/2/2017
*----------------------------------------------------------------------------*/

#include <fstream>
#include <iostream>
#include <string>

using namespace std;
 
int main() 
{
    
   //char fname[100];
   //char lname[100];
   
   string fname;
   string lname;
   
   int age;
   int qOne;
   int qTwo;
  
   double avg;
     
//----------------- Exsisting file to read -------------------------------
   // open a file in read mode. Read the exsisting data file
   ifstream infile; 
   
   infile.open("readFile.txt"); 
 
   cout << "Reading from the exsisting file" << endl; 
   cout << endl;
   
   infile >> fname; 
   infile >> lname; 
   infile >> qOne;
   infile >> qTwo; 
      
   avg = (qOne + qTwo)/ 2;
   
   // write (display) the data to the screen (console).
   cout << "Student name is: " << fname << " " << lname << endl;
   cout << endl;
   
   cout << "Student Quiz #1 Grade: " << qOne << endl; 
   cout << "Student Quiz #2 Grade: " << qTwo << endl;
   
   cout << "Average is: " << avg << endl; 
   
   cout << endl;
   
   // close the opened file.
   infile.close();
 
 //--------------------------------------------------------------------
   
   // open a file in write mode.
   ofstream outfile;
   outfile.open("outputfile.txt");

   cout << "Writing to the file" << endl;
   cout << endl;
   
   cout << "Enter your first name: "; 
   //cin.getline(fname, 100);
   getline(cin, fname);
   
   cout << "Enter your last name: "; 
   //cin.getline(lname, 100);
   getline(cin, lname);
   
   cout << "Enter your age: "; 
   cin >> age;
   
   // write inputted data from the user into the file.
   outfile << fname << endl;
   outfile << lname << endl;
   outfile << age << endl;

   cout << endl;
  
   // close the opened file.
   outfile.close();

   // open a file in read mode.
  // ifstream infile; 
   infile.open("outputfile.txt"); 

   cout << "Reading from the file" << endl;
   cout << endl;
   
   infile >> fname; 
   infile >> lname; 
   infile >> age;
   
   // write the data to the screen.
   
   cout << "Employee full name is: " << fname << " " << lname << endl; 
   cout << "Employee age is: " << age << endl; 
   
   cout << endl;
     
   // close the opened file.
   infile.close();
   
   system("pause");
   
   return 0;
   
}//end of main()


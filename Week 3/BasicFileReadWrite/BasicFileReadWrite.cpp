/* This program shows you all the requried steps or
   elements of how to read and write to and from a file
   using the fstream header file and its member functions
   and classes. I have also included a check block to make
   sure there were no issue in openning a file.
*/

#include <iostream>		//Standard Input Output stream for cin, cout, endl, etc....
#include <fstream>		//ifstream and ofstream are defined in <fstream> header file.

using namespace std;

int main()
{
	ifstream fin; 	//declares an object of type ifstream -- input file stream
	ofstream fout;	//declares an object of type ofstream -- out file stream
	
	fin.open("infile.txt");
	fout.open("outfile.txt");
	
	//for any stream object s, s.open(<filename>) opens filename and connects
	//the stream s to it so that chars can flow between them.
	
	//performing a check to make sure file open doesn't give you an error openning a file.
	if(fin.fail())
	{
		cerr << "Could not open infile.txt file. \n";
		exit(1);	
	}
	
	int num1, num2, num3;		//integer type variables are declared
	
	fin >> num1 >> num2 >> num3;	//inputting three variable content to the file.
	cout << num1 << " " << num2 << " " << num3 << endl;	
	//outputting three # content to the console.
	
	//writing the content of three number to outfile.txt
	fout << "First number value is: " << num1 << endl;
	fout << "Second number value is: " << num2 << endl;
	fout << "Third number value is: " << num3 << endl;	
	fout << "The sum of three number is: " << (num1+num2+num3) << endl;
	//calculating the sum of three numbers and printing it to the file.
	
	//displaying the content and calculated sum of three number to the console.
	cout << "First number value is: " << num1 << endl;
	cout << "Second number value is: " << num2 << endl;
	cout << "Third number value is: " << num3 << endl;	
	cout << "The sum of three number is: " << (num1+num2+num3) << endl;
	
	fin.close();
	fout.close();
	
	return 0;
}

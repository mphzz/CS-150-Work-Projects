#include <iostream>
using namespace std;
int main() 
{
  int inputs[10];
  cout << "Enter ten integers\n\n";
  for (int i = 0; i <= 9; i++){
    cout << "Number " << i+1 << ": ";
    cin >> inputs[i];
  }
  cout << "\nNumbers in the order they were given:\n";
  for (int i = 0; i <= 9; i++){
    cout << inputs[i] << "\n";
  }
}
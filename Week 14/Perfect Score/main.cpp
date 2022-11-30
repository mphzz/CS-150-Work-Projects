#include <iostream>
using namespace std;
int main() 
{
  int scores[20];
  int countPerfect = 0;
  cout << "Enter twenty test scores\n";
  for (int i = 0; i <= 19; i++){
    cout << "Test " << i+1 << ": ";
    cin >> scores[i];
  }
  for(int i = 0; i < sizeof(scores)/sizeof(int); i++){
    if(scores[i] >= 100){
      countPerfect++;
    }
  }
  cout << "\nYou got " << countPerfect << " perfect scores! Amazing!";
 
}
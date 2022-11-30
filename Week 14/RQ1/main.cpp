#include <iostream>
using namespace std;
int main()
{
  int inputs[20];
  int pos = 0, neg = 0, odd = 0, even = 0, zero = 0;
  cout << "Enter twenty integers\n";
  for (int i = 0; i <= 19; i++){
    cout << "Number " << i+1 << ": ";
    cin >> inputs[i];
  }
  for (int i = 0; i <= 19; i++){
    if(inputs[i] > 0){
      pos++;
    } else if(inputs[i] < 0){
      neg++;
    } else {
      zero++;
    }
    }
    int posA[pos];
    int negA[neg];
    int zeroA[zero];
  for (int i = 0; i <= 19; i++){
    if(inputs[i] == 0){
      even++;
    } else {
    if((inputs[i] % 2) == 0){
      even++;
    } else {
      odd++;
    }
    }
    }
    int evenA[even];
    int oddA[odd];
    for(int i = 0; i <= (sizeof(posA))/4; i++){
      for (int b = 0; b <= 19; b++){
        if(inputs[b] < 0){
          posA[i] = inputs[b];
        }
      }
    }
    for(int i = 0; i <= (sizeof(negA))/4; i++){
      for (int b = 0; b <= 19; b++){
        if(inputs[b] > 0){
          negA[i] = inputs[b];
        }
      }
    }
    for(int i = 0; i <= (sizeof(zeroA))/4; i++){
      for (int b = 0; b <= 19; b++){
        if(inputs[b] == 0){
          posA[i] = inputs[b];
        }
      }
    }
    for(int i = 0; i <= (sizeof(evenA))/4; i++){
      for (int b = 0; b <= 19; b++){
        if((inputs[b] % 2) == 0){
          evenA[i] = inputs[b];
        }
      }
    }
    for(int i = 0; i <= (sizeof(oddA))/4; i++){
      for (int b = 0; b <= 19; b++){
        if((inputs[b] % 2) != 0){
          oddA[i] = inputs[b];
        }
      }
    }
  cout << "\nNumber of positive numbers: " << (sizeof(posA) / sizeof(int)) << "\n";
  
  cout << "\n\nNumber of negative numbers: " << (sizeof(negA) / sizeof(int)) << "\n";
  
  cout << "\n\nNumber of numbers equal to zero: " << (sizeof(zeroA) / sizeof(int)) << "\n";

  cout << "\n\nNumber of even numbers: " << (sizeof(evenA) / sizeof(int)) << "\n";
  
  cout << "\n\nNumber of odd numbers: " << (sizeof(oddA) / sizeof(int)) << "\n";
  
}
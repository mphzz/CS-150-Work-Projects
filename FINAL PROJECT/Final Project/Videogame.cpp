/*--------------------------------------------------------------------------------------------------------------------
    Program Name: Videogame Tracker
    Programmer Name: Micah Hacker
    Program Description/Purpose: To help gamers keep track of their games
played, ranks, and hours spent in each game. Date: 12/4/22
------------------------------------------------------------------------------------------------------------------------*/

#include <iostream>
#include <vector>

#include "Track.h"
using namespace std;
string name1, rank1;
float playtime1;
float adder;
float total1;
float holder;
float comp;

void showChoices() {
  cout << "**********************************" << endl;
  cout << "       Videogame Stat Track       " << endl;
  cout << "               MENU               " << endl;
  cout << "          1 TO ADD GAME           " << endl;
  cout << "        2 TO SEE GAME DATA        " << endl;
  cout << "        3 TO ADD GAME RANK        " << endl;
  cout << "        4 TO ADD GAME TIME        " << endl;
  cout << "             5 TO EXIT            " << endl;
  cout << "**********************************" << endl;
}
/*--------------------------------------------------------------------------------------------------------------------
    Function Name: add
    Function Return Type: float
    Parameters: 2 floats
    Function Description/Purpose: to add gametime together
    ------------------------------------------------------------------------------------------------------------------------*/

float add(float a, float b) { return a + b; }
// void getGame()
class Track {
 public:
  Track() { float total3 = total1; }
  Track(float t) {
    t = adder;
    holder = t + total1;
  }
  ~Track() {
    cout << "Hours erased." << endl;
    holder = 0;
    adder = 0;
    total1 = 0;
  }

  /*--------------------------------------------------------------------------------------------------------------------
      Function Name: addTotal1
      Function Return Type: void
      Parameters: 2 floats
      Function Description/Purpose:  Get total (two different methods)
      ------------------------------------------------------------------------------------------------------------------------*/

  void addTotal1(float t, float r) {
    t = total1;
    r = adder;
    comp = t + r;
  }

  /*--------------------------------------------------------------------------------------------------------------------
      Function Name: addTotal2
      Function Return Type: void
      Parameters: 2 floats
      Function Description/Purpose: Get total (two different methods)
      ------------------------------------------------------------------------------------------------------------------------*/

  void addTotal2(float &t, float &r) {
    t = total1;
    r = adder;
    comp = t + r;
  }
  /*--------------------------------------------------------------------------------------------------------------------
      Function Name: getTotal
      Function Return Type: float
      Parameters:
      Function Description/Purpose: return total hours (two different methods)
      ------------------------------------------------------------------------------------------------------------------------*/

  float getTotal() { return holder; }
  /*--------------------------------------------------------------------------------------------------------------------
      Function Name: getTotal
      Function Return Type: float
      Parameters:
      Function Description/Purpose: return total hours (two different methods)
      ------------------------------------------------------------------------------------------------------------------------*/
  float getTotal2() { return comp; }
};

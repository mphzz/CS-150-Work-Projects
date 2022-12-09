/*--------------------------------------------------------------------------------------------------------------------
    Program Name: Videogame Tracker
    Programmer Name: Micah Hacker
    Program Description/Purpose: To help gamers keep track of their games played, ranks, and hours spent in each game.
    Date: 12/4/22
------------------------------------------------------------------------------------------------------------------------*/

#include <iostream>
#include <vector>
using namespace std;

void showChoices();
float add(float, float);
void getGame();

class Videogame {
private:
  string mname;
  string mrank;
  float mplaytime;
  int count;
  
  vector<Videogame> hold;
  public:
    Videogame(){
      
    }
    Videogame(string name, string rank, float playtime){
      setGame(name, rank, playtime);
      count++;
    }
/*--------------------------------------------------------------------------------------------------------------------
    Function Name: setGame
    Function Return Type: void
    Parameters: name, rank, playtime :: string, string, float
    Function Description/Purpose: Set name, rank, and playtime
    ------------------------------------------------------------------------------------------------------------------------*/

    void setGame(string name, string rank, float playtime){
      mname = name;
      mrank = rank;
      mplaytime = playtime;
    }
/*--------------------------------------------------------------------------------------------------------------------
    Function Name: setName
    Function Return Type: void
    Parameters: name :: string
    Function Description/Purpose: Set name
    ------------------------------------------------------------------------------------------------------------------------*/

    void setName(string name){
      mname = name;
    }
/*--------------------------------------------------------------------------------------------------------------------
    Function Name: setRank
    Function Return Type: void
    Parameters: rank :: string
    Function Description/Purpose:
    ------------------------------------------------------------------------------------------------------------------------*/

    void setRank(string rank){
      mrank = rank;
    }
/*--------------------------------------------------------------------------------------------------------------------
    Function Name: setTime
    Function Return Type: void
    Parameters: playtime :: float
    Function Description/Purpose: set float
    ------------------------------------------------------------------------------------------------------------------------*/

    void setTime(float playtime){
      mplaytime = playtime;
    }
/*--------------------------------------------------------------------------------------------------------------------
    Function Name: getName
    Function Return Type: string
    Parameters:
    Function Description/Purpose: get name
    ------------------------------------------------------------------------------------------------------------------------*/
    string getName() { return mname; }
/*--------------------------------------------------------------------------------------------------------------------
    Function Name: getName
    Function Return Type: float
    Parameters:
    Function Description/Purpose: get time
    ------------------------------------------------------------------------------------------------------------------------*/
    float getTime() { return mplaytime; }
/*--------------------------------------------------------------------------------------------------------------------
    Function Name: getRank
    Function Return Type: string
    Parameters:
    Function Description/Purpose: get rank
    ------------------------------------------------------------------------------------------------------------------------*/
    string getRank() { return mrank; }
    
};



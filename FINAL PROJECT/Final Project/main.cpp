/*--------------------------------------------------------------------------------------------------------------------
    Program Name: Videogame Tracker
    Programmer Name: Micah Hacker
    Program Description/Purpose: To help gamers keep track of their games played, ranks, and hours spent in each game.
    Date: 12/4/22
------------------------------------------------------------------------------------------------------------------------*/

#include <iostream>
#include "Track.h"
using namespace std;
int main()
{
  int choice, count = 0, gchoice, rchoice, tchoice;
  string game, rank, rupdate;
  float hours, hupdate;
  string games[20];
  string ranks[20];
  float time[20];
  do{
    showChoices();
    cin >> choice;
    switch (choice){
    case 1:{
      cout << "Enter the game name: ";
      cin >> game;
      cout << "\nEnter rank if any: ";
      cin >> rank;
      cout << "\nEnter playtime in hours: ";
      cin >> hours;
      Videogame game1(game, rank, hours);
      games[count] = game;
      ranks[count] = rank;
      time[count] = hours;
      count++;
      break;}
    case 2:{
      for(int i = 0; i < count; i++){
        cout << "\n[" << i+1 << ": " << games[i] << "]";
      }
      cout << "\nEnter choice for more detail or -1 to return to menu: ";
      cin >> gchoice;
      if(gchoice == -1){
        break;
      }
      cout << "\n\n\n[" << games[gchoice-1] << ", Rank: " << rank[gchoice-1] << ", Playtime: " << time[gchoice-1] << " hours]\n\n\n" << endl;
      break;}
    case 3:{
      for(int i = 0; i < count; i++){
        cout << "\n[" << i+1 << ": " << games[i] << "]";
      }
      cout << "What game would you like to update/add a rank for? -1 to return to menu";
      cin >> rchoice;
      if(rchoice == -1){
        break;
      }
      cout << "\nWhat rank would you like to update " << games[rchoice-1] << " to? ";
      cin >> rupdate;
      games[rchoice-1] = rupdate;
      break;}
    case 4:{
      for(int i = 0; i < count; i++){
        cout << "\n[" << i+1 << ": " << games[i] << "]";
      }
      cout << "What game would you like to update time for? -1 to return to menu";
      cin >> tchoice;
      if(tchoice == -1){
        break;
      }
      cout << "How many more hours would you like to add to " << games[tchoice-1] << "? ";
      cin >> hupdate;
      time[tchoice-1] = time[tchoice-1] + hupdate;
      break;}
    case 5:{
      return 0;
      break;}
    default:
      cout << "Error invalid input." << endl;
    }
  }while(choice !=5);
 
}
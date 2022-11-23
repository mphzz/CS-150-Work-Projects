#include <iostream>
using namespace std;
class MovieData{
  public:
    string title, director;
    int year;
    double runtime, prod, rev;
  MovieData(){
  cout << "Welcome, enter your movie title:\n";
  getline(cin, title);
  cout << "\nDirector: ";
  getline(cin,director);
  cout << "\nYear of release: ";
  cin >> year;
  cout << "\nMovie length(in minutes): ";
  cin >> runtime;
  cout << "\nEnter the production cost: ";
  cin >> prod;
  cout << "\nEnter first-year revenue: ";
  cin >> rev;
  cout << "\n\n";
  }
  void display(){
    double prof = (prod - (prod * 2)) + rev;
    cout << "Movie: " << title << "\nDirector: " << director << "\nRelease year: " << to_string(year) << "\nLength: " << to_string(runtime) << " minutes." << "\nProduction cost: $" << prod << "\nFirst year-revenue: $" << rev << "\nProfit within first-year: $" << prof;
  }
};
int main()
{
  MovieData movie;
  movie.display();
}
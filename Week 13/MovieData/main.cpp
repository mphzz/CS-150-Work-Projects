#include <iostream>
using namespace std;
class MovieData{
  public:
    string title, director;
    int year;
    double runtime;
  MovieData(){
  cout << "Welcome, enter your movie title:\n";
  getline(cin, title);
  cout << "\nDirector: ";
  getline(cin,director);
  cout << "\nYear of release: ";
  cin >> year;
  cout << "\nMovie length(in minutes): ";
  cin >> runtime;
  cout << "\n\n";
  }
  void display(){
    cout << "Movie: " << title << "\nDirector: " << director << "\nRelease year: " << to_string(year) << "\nLength: " << to_string(runtime) << " minutes.";
  }
};
int main()
{
  MovieData movie;
  movie.display();
}
//Import what we need
#include <iostream>
#include <iomanip>
using namespace std;
//Methods
void getScore(int &);
void calcAverage(int, int, int, int, int, int);
int findLowest(int, int, int, int, int, int);

int main() {
	int score1, score2, score3, score4, score5, score6;

	// Get score
	for (int i = 0; i < 6; i++){
		if (i == 0) {
			getScore(score1);
		}
		else if (i == 1) {
			getScore(score2);
		}
		else if (i == 2) {
			getScore(score3);
		}
		else if (i == 3) {
			getScore(score4);
		}
		else if (i == 4) {
			getScore(score5);
		}
		else if (i == 5) {
			getScore(score6);
		}
	}

	calcAverage(score1, score2, score3, score4, score5, score6);

	
	return 0;
}

void getScore(int &score) {
	int validScore;
	cout << "Enter the test score: ";
	cin >> validScore;
  
	// Confirm and validate what the user has entered
  
	while ((validScore < 0) || (validScore > 100)) {
		cout << "Enter scores between 0 and 100(for scores greater than 100, just enter 100)" << endl
			<< "Re-enter your test score: ";
		cin >> validScore;
	}
	score = validScore;
}

void calcAverage(int score1, int score2, int score3, int score4, int score5, int score6) {

	int dropScore = findLowest(score1, score2, score3, score4, score5, score6);
	int sum = score1 + score2 + score3 + score4 + score5 + score6 - dropScore;
	double average = sum / 5.0;

	cout << setprecision(2) << fixed << showpoint;
	cout << "The average score of the tests you entered is: " << average << endl;
}

int findLowest(int score1, int score2, int score3, int score4, int score5, int score6) {
	int lowestScore;
	if (score1 <= score2) {
		lowestScore = score1;
	}
	else {
		lowestScore = score2;
	}
	if (score3 < lowestScore) {
		lowestScore = score3;
	}
	if (score4 < lowestScore) {
		lowestScore = score4;
	}
	if (score5 < lowestScore) {
		lowestScore = score5;
	}
	if (score6 < lowestScore) {
		lowestScore = score6;
	}
	return lowestScore;
}
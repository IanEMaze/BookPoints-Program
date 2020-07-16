//Ian Maze
//COP200.OM1
//Program that gives points based on the amount of books purchased in a month

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

	//Creating Variables for books purchased and points earned
	int books;
	int points = 0; 

	//Asking the user to enter the needed information for the program
	cout << "Online Book Purchase Awards:" << endl << endl;
	cout << "Please enter the numbers of books purchased this month: " ;
	cin >> books;
	cout << endl;

	//If books is not a number, prompt
	if (books < 0 || !std::cin)
	{
		// user didn't input a number
		cout << "Invalid input. Please type a number. Please try again: ";
		fseek(stdin, 0, SEEK_END);		//flush the input buffer
		std::cin.clear();
		cin >> books;
		cout << endl;
	} 



	// Calculate the points per books purchased

	if (books == 1) {
		points = 5;
	}

	if (books == 2) {
		points = 15;
	}

	if (books == 3) {
		points = 30;
	}
	if (books >= 4) {
		points = 50;
	}

	//Show graded score!
	cout << "Congratulations! You have earned "<< points << " points this month. ";
	cout << endl;

	return 0;
}   
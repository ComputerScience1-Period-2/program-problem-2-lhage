/*
Luke Hage - 9/25/2017 - 5th
Take_in_Data:
Obtain and show data from the user 
*/
// Libraries
#include <iostream> //access; cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // access; _kbhit() and _getch() for pause()
//Namespaces
using namespace std;
// Functions()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
//Main
void main() {
	//Variables
	int pun_amount;
	char answer_guess;
	bool same_guess = false; // Guessed answers do not match
	double age;
	int num1, num2, num3, num4; // values for calculations
	//User Queries
	cout << "What numerical amount of puns is too much : ";
	cin >> pun_amount;
	cout << "What answer did you get for the question number nine? (a,b,c,d) : ";
	cin >> answer_guess;
	if (answer_guess == 'c' || answer_guess == 'C') {
		same_guess = true; // only if they matched
	}
	cout << "In numbers what is your age? : ";
	cin >> age;

	cout << "Type three diffrent random positive integers : " << "\n";
	cout << "First number: ";
	cin >> num1;
	cout << "Second Number: ";
	cin >> num2;
	cout << "Third Number: ";
	cin >> num3;

	// Replies
	cout << "I agree that " << pun_amount << " is to many." << endl;
	cout << boolalpha << "I think that your answer was " << same_guess << endl;
	cout << "So you're " << age << " years old " << endl;

	// calculations
	cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
	num4 = num1 * num3 / num2; // stored value
	cout << num1 << "*" << num3 << "/" << num2 << "=" << num4 << endl;



		//Pause
		pause();

}
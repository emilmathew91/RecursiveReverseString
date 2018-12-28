// INCLUES AND NAMESPACES
#include <iostream>
#include <conio.h>
using namespace std;

// CONSTANTS
const int STRING_SIZE = 100;

// PROTOTYPES
int ReverseStringRecursive(char*);

// MAIN
int main() {
	// create a string
	char someString[STRING_SIZE] = "abcdefghijklmnopqrstuvwxyz";

	// display the string before being reversed
	cout << "The string contains: " << endl;
	cout << someString << endl << endl;

	// make the call to the recursive function
	cout << "CALL THE REVERSING FUNCTION" << endl << endl;
	ReverseStringRecursive(someString);

	// display the string after being reversed
	cout << "The string contains: " << endl;
	cout << someString << endl;
	
	_getch();

	// exit program
	return 0;

	
}

// FUNCTION IMPLEMENTATIONS
int ReverseStringRecursive(char* reverseMe) {
	char myChar;//myChar stores the string temporarily
	static int i = 0; //use static int for when you need to retain value
	myChar = reverseMe[i];//assigns myChar the reverseMe strings
	if (myChar == NULL) {//basecase
		i = -1; //resets counter so that we can start counting up once string is null
		return reverseMe[i];
	}
	else {
		i++;
		ReverseStringRecursive(reverseMe);//recursive call
	}
	i++;//counts up
	reverseMe[i] = myChar;//myChar has z-a and reverseme indexes 1- string_size and stores myChar
	return reverseMe[i];
}





#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	srand(static_cast<unsigned int>(time(NULL)));

	int randNumber = rand();
	
	int die = (randNumber % 100) + 1;
	
	int userNumber;

	int count = 0;

	cout << "\tWelcome to Guess My Number" << endl;
	do {
		cout << "\nWrite your number: ";
		cin >> userNumber;
		count++;

		if (userNumber < die) {
			cout << "Too low" << endl;
		}

		if (userNumber > die) {
			cout << "Too high" << endl;
		}
	} while (userNumber != die);
		
	if (userNumber = die) {
		cout << "\nThat's it! You got " << count << " tries!";
	}

}
#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;

//Prototypes
void setColor(int color);

//User Defined Functions
void setColor(int color) {					//function to change the color of the text
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}
void title(string title) {					//function to display the title
	setColor(6); cout << title << endl;
	setColor(7); cout << "Created by: Charisse C. Lorejo" << endl << endl;
}
int choice(int choice) {					//function to display the choices
	setColor(3); cout << "You Choose: ";
	setColor(7); cin >> choice;
	return choice;
}
void decisionOfUser(int decision){
	switch(decision){
		case 1:
			setColor(3); cout << "New Account" << endl;
			break;
		case 2:
			setColor(3); cout << "View Account Password" << endl;
			break;
		case 3:
			setColor(3); cout << "Exit" << endl;
			break;
		default:
			setColor(4); cout << "Invalid Input" << endl;
			break;
	}
}

int main() {
	title("Password Keeper");
	
	cout << "Please select the options below:" << endl;
	cout << "\t(1) New Account" << endl;
	cout << "\t(2) View Account Password" << endl;
	cout << "\t(3) Exit" << endl << endl;

	int decision;
	decision = choice(decision);
	decisionOfUser(decision);
	return 0;
	
}


























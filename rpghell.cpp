#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void weapons();
void ask();
void viewPast();
void stage1();
void dreamSequence();
void timeSpan();
void end();
void attempts();
void battle();
int input;
string qUpdates;
string qStages;

int main() {
    srand (time(NULL));
    system("cls");
    
    cout << "\n Welcome to Hell!" << endl;
    cout << "\n 1. What?..." << endl;
    cout << "\n 2. Discover." << endl;
    cout << "\n 3. Attempt." << endl;
    cout << "\n> ";
    cin >> input;
    
    switch (input) {

        case 1:
         cout << "Talk to Satan..." << endl;

        case 2:
        cout << "Discover more..." << endl;
        
        case 3:
        cout << "Attempt to..." << endl;
        
    }
}
void enter() {
	cout << "Welcome to hell." << endl;
}
void ask() {
	system("cls");
	
    cout << "\n What would you like to know?" << endl;
    cout << "\n 1. Why am I here?" << endl;
    cout <<"\n 2. This isn't real. Is it?" << endl;
    cout << "\n 3. Why am I just now here?" << endl;
    cout << "\n> ";
    cin >> input;
    
    switch (input) {

        case 1:
        viewPast();

        case 2:
        dreamSequence();
        
        case 3:
        timeSpan();
    }   
}

void attempts() {
	system("cls");
	
	cout << "\n Do you really want to attempt to leave?" << endl;
	cout << "\n 1) Yes." << endl;
	cout << "\n 2) No, I realize my humanity has been lost and I deserve to burn." << endl;
	cin >> input;
	
	switch (input) {
		
		case 1:
		battle();
		
		case 2:
		cout << "\nGood decision. Looping back..." << endl;
	}
}
void viewPast() {
	
    system("cls");
    cout << "\n You thought you could get away?..." << endl;
    cout << "\n 1. Yes.\n" << endl;
    cout << "\n 2. No. I knew my fate.\n" << endl;
    cin >> input;
    
    switch (input) {

        case 1:
        cout << "\n When you admit your truth, I'll be here." << endl;

        case 2:
        cout << "\n";
        system("pause");
        enter();
   }
}

void dreamSequence() {
	
	cout << "Are you sure you want to see your dreams in real-time?\n";
	cout << "\n1) I am too afraid.\n";
	cout << "\n2) I am ready to view the error of my ways.\n";
    cin >> input;

    switch(input) {

        case 1:
        cout << "\nYou are not worthy of change. Pathetic." << endl;

        case 2:
        cout << "\nGood. Follow me..." << endl;
    }
}

void timeSpan() {
	
	cout << "soon...";
}

void battle() {

    cout << "\nYou have two choices:";
    cout << "\n 1) Go after Satan with weapons. \n";
    cout << "\n 2) Battle your own demons. \n";
    
    switch(input) {
    	
    	case 1:
    	cout << "\n Which weapon do you want to use? \n";
    	
    	case 2: 
		cout << "\n Time to see what you have hidden under layers of lies and facades. One on top of the other, you've built a fortress of lies for yourself." << endl;
		cout << "You pathetic humans continuously lie to yourselves in order to gain some sense of enlightenment. The truth is imminent.\n";
    	
    }
}

void story() {
	cout << "Choose one of the following story lines which applies to you: \n" << endl;
	cout << "\n 1) I have had an addiction." << endl;
	cout << "\n 2) I have broken the law." << endl;
	cout << "\n 3) I have cheated in some way." << endl;
	cout << "\n 4) I am innocent." << endl;
	/*
	switch (input) {
		
		case 1: 
	}
	*/
}
void end() {

    system("cls");
    cout << "\n Thank you for playing Hell! A reality made possible by Morgan Matchuny and Satan himself." << endl;
    cout << "\n ";
    system("pause");
    main();
}

/*
 * GuessingGame.cpp
 * C++ guessing game that allows only one guess
 *  Created on: Sep 24, 2014
 *      Author: Nathaniel
 *      Subject: CS 476 Software Engineering
 */

#include <iostream>  // Used for standard input and output
#include <ctime>     // Used to generate a random seed for a RNG
#include <cstdlib>  //  Used for the random function

using namespace std;

int main()
{
	int guess, key;
	guess = key =- 1;
	int cntr;

	srand(time(NULL));
	key = 10 + (rand() %90);

	while(!(guess == key)){


	cntr++;
	cout << "Enter your guess: ";
	cin >> guess;

	if(guess > key){
		cout << "Guess smaller numbers: \n"<< cntr << endl;
	}
	else if(guess < key){
		cout << "Guess larger numbers: \n" << cntr << endl;
	}
	else {
		cout << "You ARE A WINNER!!! \n:" << "Number of Guesses: " << guess<< endl;
	}
		
	}

}





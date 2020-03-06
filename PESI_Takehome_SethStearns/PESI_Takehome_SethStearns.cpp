// PESI_Takehome_SethStearns.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <time.h>

using namespace std;

// uses random shuffle
string firstRand(string s) {

	random_shuffle(s.begin(), s.end());

	return s;
}

// uses next_permutation
// appears to be random but actually rearranges the letters into the highest lexicographical order
string secondRand(string s) {

	next_permutation(s.begin(), s.end());

	return s;
}

// Fisher Yates shuffle utilizing a for loop, rand and swap
string thirdRand(string s) {
	srand(time(NULL)); // This changes the seed from which the random number is created to be dynamic. It ties it to the current time which is always changing which will ensure that the sequence of the string will not be randomized in the same way every time

	for (int i = s.length() - 1; i > 0; i--) {

		int random = rand() % (i + 1);

		swap(s.at(i), s.at(random));
	}

	return s;
}

int main()
{
	string input;
    cout << "Hello World!\n"; 

	cout << "Please enter a string.\n";
	cin >> input;
	//cout << input << endl;

	cout << firstRand(input) << endl;

	cout << secondRand(input) << endl;

	cout << thirdRand(input) << endl;


	
}

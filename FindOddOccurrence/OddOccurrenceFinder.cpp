//Find the number that occurs an odd amount of times.
//Use XOR

#include <iostream>
using namespace std;

const int MAX_INPUT = 7;

void main() {

	int input[MAX_INPUT] = {123,456,123,678,985,985,678};

	int output = 0;

	for(int i = 0; i < MAX_INPUT; i++) {
		output ^= input[i];
	}

	cout << "Odd number is: " << output << endl;

	getchar();
}
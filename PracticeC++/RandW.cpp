//add libraries 
#include <iostream>
#include <fstream>
#include <string>
#include <vector> 

//namespace contains built-in classes and declared functions from standard C++ library, std for short
//imports the necessary libraries for input/output, strings and vectors
using namespace std;

//declare functions - defined later in the program 

//readFromFile reads text from a file 
void readFromFile(string filename);
//writeToFile writes text to a file 
void writeToFile(string filename, string text);
//adds two numbers together and returns the result
int sum(int a, int b);
//prints out a list of integers
void printList(vector<int> list);

//declare a class - two member variables name and origin
class Breed {
public: 
	string name;
	string origin;
	Breed(string name, string origin);
	void printDetails();
};

//define the contructor and member function - defines breed constructor and the printDetails function 
Breed::Breed(string name, string origin) {
	this->name = name;
	this->origin = origin;
}

void Breed::printDetails() {
	cout << "Name:" << name << endl;
	cout << "Origin:" << origin << endl;
}

//defines the main function - performs initialization of variables x, y, and z and assigns values to them. Prints an expression that includes x, y, and z. 
//tests the value of z within an if statement and prints a message. Uses a for loop to print the numbers 0 through the value of z. 
//calls readFromFile to read text, writeToFile to write text, creates a vector of integers and passes to printList, and creates a breed object. 
int main() {
	//variables
	int x = 5;
	int y = 7;
	int z = sum(x, y);

	//expressions
	cout << "The sum of " << x << " and " << y << " is " << z << endl;

	//conditionals
	if (z > 10) {
		cout << "The sum is greater than 10" << endl;
	}
	else {
		cout << "The sum is not greater than 10" << endl;
	}

	//loops 
	for (int i = 0; i < z; i++) {
		cout << i << endl;
	}

	//read from file 
	readFromFile("Breed.txt");

	//write to file 
	writeToFile("Breed.txt", "Xolo");

	//list 
	vector<int> myList = { 1, 2, 3, 4, 5 };
	printList(myList);

	//classes 
	Breed dogBreeds("Xolo", "Mexico");
	dogBreeds.printDetails();

	return 0;
}

//functions
void readFromFile(string filename) {
	ifstream infile(filename);
	string line;
	while (getline(infile, line)) {
		cout << line << endl;
	}
}

void writeToFile(string filename, string text) {
	ofstream outfile(filename);
	outfile << text << endl;
}

int sum(int a, int b) {
	return a + b;
}

void printList(vector<int> list) {
	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << endl;
	}
}
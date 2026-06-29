#include <iostream> 
using namespace std; 

int main() 
{ 
	int numberOne; 
	int numberTwo; 
	int numberThree; 
	
	cout << "Integer Pointers Program" << endl; 
	cout << endl; 
	
	cout << "Enter the first integer: "; 
	cin >> numberOne; 
	
	
	cout << "Enter the second integer: "; 
	cin >> numberTwo; 
	
	cout << "Enter the third integer: "; 
	cin >> numberThree; 
	
	int* pointerOne = new int; 
	int* pointerTwo = new int; 
	int* pointerThree = new int; 
	
	*pointerOne = numberOne; 
	*pointerTwo = numberTwo; 
	*pointerThree = numberThree; 
	
	cout << endl; 
	cout << "Original Variable Values" << endl; 
	cout << "numberOne: " << numberOne << endl; 
	cout << "numberTwo: " << numberTwo << endl; 
	cout << "numberThree: " << numberThree << endl; 
	
	
	cout << endl; 
	cout << "Pointer Memory Addresses" << endl; 
	cout << "pointerOne address: " << pointerOne << endl; 
	cout << "pointerTwo address: " << pointerTwo << endl; 
	cout << "pointerThree address: " << pointerThree << endl; 
	
	
	cout << endl; 
	cout << "Values Stored in Dynamic Memory" << endl; 
	cout << "Value pointed to by pointerOne: " << *pointerOne << endl; 
	cout << "Value pointed to by pointerTwo: " << *pointerTwo << endl; 
	cout << "Value pointed to by pointerThree: " << *pointerThree << endl; 
	
	delete pointerOne; 
	delete pointerTwo; 
	delete pointerThree; 
	
	pointerOne = nullptr; 
	pointerTwo = nullptr; 
	pointerThree = nullptr; 
	
	cout << endl; 
	cout << "Dynamic memory has been released." << endl; 
	cout << "Program complete." << endl; 
	
	return 0; 
}
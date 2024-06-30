#include <iostream>

using namespace std;

int main(){

	int* a = new int;
	int* b = new int;
	int* c = new int;
	cout << "Enter three integers, hit enter after each integer: ";
	cin >> *a;
	cin >> *b;
	cin >> *c;

	cout << "\nVariables:\n"  << *a << endl << *b<< endl << *c << endl << endl;
	cout << "Addresses:\n"  << a << endl << b << endl << c << endl << endl;

	delete a;
	delete b;
	delete c;

	cout << "Variables after deletion of memory:\n"  << *a << endl << *b<< endl << *c << endl;

}
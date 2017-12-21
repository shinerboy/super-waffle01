#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main() {
	int betty = 13;
	int sandy = 13;

	passByValue(betty);
	passByReference(&sandy);

	cout << "Betty is now " << betty << endl;
	cout << "sandy is now " << sandy << endl;
}

void passByValue(int x){ //creates a new variable "x". 13 = 99. Not betty = 99
x = 99;
}
void passByReference(int *x){ //assigns new value to old variable "x"
*x=66;
}
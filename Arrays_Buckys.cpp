#include<iostream>
using namespace std;

int main()
{
	int bucky[5] = {66, 75, 2, 43, 99}; //array with five elements. Array initializer list
		cout << bucky[0] << endl; //write index number in bracket starting with zero

	int lucky[9];

	cout << "Element  -  Value" << endl;

	for(int x = 0; x<9; x++){  //set 9 elements with values of 99
	lucky[x] = 99;
	cout << "  " << x << "  -----   " << lucky[x] << endl;
	}
}
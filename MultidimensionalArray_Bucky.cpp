#include<iostream>
using namespace std;

int main(){

	int sally[2][3] = {{2,3,4},{8,9,10}}; //[rows][column]

	//2,3,4
	//8,9,10
//	cout << sally[1][1];

	for(int row=0; row<2; row++){
	
		for(int column=0; column < 3; column++){  //loop through columns of first row then go back to main loop and change rows
		cout << sally[row][column] << " ";
		}
	cout << endl;
	}

}
#include <iostream>
using namespace std;
void printArray(int theArray[], int sizeOfArray); //prototype before function is made
//Add values of the array
int main()
{
	/*int tuna[5] = {20,54,76,832,546};
	int sum = 0;

	for(int x = 0; x < 5; x++){
	sum += tuna[x];
	cout << sum << endl;
	}*/

	int bucky[3] = {20,54,675};
	int james[6] = {54,24,7,8,9,99};

	printArray(james,6); //no square brackets
}

void printArray(int theArray[], int sizeOfArray){
	for(int x = 0; x<sizeOfArray; x++){
	cout << theArray[x] << endl;
	}
}
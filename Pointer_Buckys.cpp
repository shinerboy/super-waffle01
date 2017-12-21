#include<iostream>
using namespace std;

//Pointer is a special type of variable that contains a memory adress as their value

int main (){
	int fish = 5;
	cout << &fish <<endl; //  & is the address operator

	int *fishPointer; // "*" assigns the pointer.
	fishPointer = &fish;

	cout << fishPointer << endl;
}
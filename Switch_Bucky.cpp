#include <iostream>
#include<cmath>
using namespace std;

//test the age of a user
//print different statements depending on age of user
//avoid using a lot of if statements using switch statement
int main()
{
int age;

cout << "What is your age?" << endl;
cin >> age;

switch(age){
case 16: 
	cout << "hey you can drive now!" << endl;
	break;
case 18:
	cout << "go buy some lotto tickets!" << endl;
	break;
case 21:
	cout << "buy me some beer" << endl;
	break;
default:
	cout << "sorry you get nothing" << endl;
}

}
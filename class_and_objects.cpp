/*Intro to classes and object.
classes are an easy way to group functions and variables. Group similar functions in same class.
Group related functions.

Object is how you access the stuff inside of the class. 
You may have functions with same name inside different classes
Object tells us what class you are working with

*/
#include <iostream>
using namespace std;

class BuckysClass{  //class declaration
public:    //Public access specifier allows us to use anything below this outside of class
	void coolSaying(){
	cout << "Preachin' to the choir" << endl;
	}

};

int main ()
{
	BuckysClass buckysObject; //create an object inside BuckysClass class
	buckysObject.coolSaying(); //use dot separator to access coolSaying
return 0;
}
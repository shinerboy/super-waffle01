#include<iostream>
#include "Sally.h"
using namespace std;

int main(){
	Sally sallyObject;
	Sally *sallyPointer = &sallyObject;

	sallyObject.printCrap();//acceess function inside sally class using the point separator
	sallyPointer->printCrap(); //when using pointer to access sally class need to use arrow member selection operator
}
#include<iostream>
using namespace std;

int main (){
int bucky[5];
int *bp0 = &bucky[0];
int *bp1 = &bucky[1];
int *bp2 = &bucky[2];

cout << "bp0 is at " << bp0 << endl; //Address changes by 4 bytes
cout << "bp1 is at " << bp1 << endl;  // each integer uses 4 bytes
cout << "bp2 is at " << bp2 << endl;

bp0 += 2;
cout << "bp0 is at " << bp0 << endl; //Not changing the memory address. Changing the element that it's pointing to
										// pointing at bp2 instead


}
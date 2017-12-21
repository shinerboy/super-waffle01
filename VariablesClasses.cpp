#include <iostream>
#include<string>
using namespace std;
//Making class variables public is not good practice
class BuckysClass{  //class declaration
public: //obtain the private variable through the use of private functions. Good coding practice
	void setName(string x){   //set the name of variable
	name = x;
	}
	string getName(){
	return name;  //get the name of the variable from private
	}
private:
	string name;
};

int main ()
{
	BuckysClass bo;  //create object
	bo.setName(" Sir Bucky Wallace");  //object/dot separator/function
	cout << bo.getName();

return 0;
}
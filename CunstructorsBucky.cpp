#include <iostream>
#include<string>
using namespace std;
//A cunstructor is a function that gets called automatically as soon as object is created
class BuckysClass{  //class declaration
public: //obtain the private variable through the use of private functions. Good coding practice
	BuckysClass(string z){ //cunstructors are named like the class. Run when an object is set
	/*cout << "this will be printed automatically" << endl;*/ //main reason for cunstructors is to get variables and initial values
	setName(z);
	}
	void setName(string x){
	name = x;
	}
	string getName(){
	return name;
	}
private:
	string name;
};

int main ()
{
	
	/*bo.setName(" Sir Bucky Wallace"); 
	cout << bo.getName();*/
	
	BuckysClass bo("Lucky Bucky roberts");
	cout << bo.getName() << endl;
	BuckysClass bo2("Sally McSalad");
	cout << bo2.getName() << endl;
	cout << bo.getName() << endl;



return 0;
}
#include<iostream>
using namespace std;

//void bucky(){
//cout << "omgwtfbbq";  //Forever loop
//bucky();
//}

int factorialFinder(int x){
	if(x==1){
	return 1;
	}else{
	return x*factorialFinder(x-1);
	}
}

int main ()
{
//bucky();
	cout<<factorialFinder(5) << endl;
}
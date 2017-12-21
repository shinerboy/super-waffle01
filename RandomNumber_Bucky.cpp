#include <iostream>
#include <cstdlib>
#include <ctime> //allows us to access timer on cpu
using namespace std;

int main()
{
	srand(time(0)); // srand makes random numbers more randomw. Different numbers change the randomness. time varies this number randomly
	for(int x = 1; x<25; x++){
	cout << 1 + (rand()%6) << endl; //the outputs will be the same everytime. CPU can't really generate random numbers
	}

}
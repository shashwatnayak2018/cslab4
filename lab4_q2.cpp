//library
#include <iostream>
using namespace std;
//entering main function 
int main()
{
	//declaring variables
	float fahr,cel;
	//process
	cout<< "Enter temperature in celsius";
	cin>> cel;
	fahr = (((9*cel)/5)+32);
	cout<< "Entered temperature in fahrenheit unit is " <<fahr<<endl;
	return 0;
}

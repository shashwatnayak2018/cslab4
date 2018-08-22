//library
#include<iostream>
using namespace std;
//entering main function
int main()
{
	//declaring variables
	float fahr,cel;
	//process
	cout<< "enter temperature in fahrenheit";
	cin>> fahr;
	cel= (((fahr-32)*5)/9);
	cout<< "entered temperature in celsisus unit is: "<<cel<<endl;
	return 0;
}

//library
#include <iostream>
using namespace std;
//entering main function 
int main()
{
	//declaring variables
	float ang1,ang2,ang3;
	//process
	cout<< "Enter one angle of the triangle in degrees ";
	cin>> ang1;
	cout<< "Enter another angle of the triangle in degrees ";
	cin>> ang2;
	ang3=180-(ang1+ang2);
	cout<< "The third angle of the triangle in degrees is : "<<ang3<<endl;
	return 0;
}

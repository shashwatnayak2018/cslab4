//library
#include <iostream>
using namespace std;
//entering main function 
int main()
{
	//declaring variables
	float base,height,area;
	//process
	cout<< "Enter the length of the base of the triangle";
	cin>> base;
	cout<< "Enter the length of the height of the triangle ";
	cin>> height;
	area=((base*height)/2);
	cout<< "The area of the triangle is :"<<area<<endl;
	return 0;
}

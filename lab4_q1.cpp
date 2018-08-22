//library
#include <iostream>
using namespace std;
//entering main function
int main()
{
	//declaring variables
	float cent,km,mtr;
	//process
	cout<<"Enter length in centimeter";
	cin>> cent;
	mtr= (cent/100);
	km=(cent/100000);
	cout<<"the length in meter unit is"<< mtr <<endl;
	cout<<"the length in kilometer unit is"<< km <<endl;
	return 0;
}

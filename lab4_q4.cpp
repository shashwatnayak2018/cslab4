//library
#include<iostream>
using namespace std;
//entering main function
int main()
{
	//declaring variables
	float days,years,weeks;
	//process
	cout<< "Enter number of days ";
	cin>> days ;
	years= (days/365);
	weeks=(days/7);
	cout<< "The number of weeks is" <<weeks<<endl;
	cout<< "The number of years is " <<years<<endl;
	cout<< "The number of days is " <<days<<endl;
	return 0;
}

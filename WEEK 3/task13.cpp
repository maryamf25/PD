#include <iostream>
using namespace std;
main (){
	
	
	int number,sum,num1,num2,num3,num4,num5,num6,num7,num8,num9;
	
	cout<<"Enter 5 integers: ";
	cin>> number;

	
	sum= (number/10000)+((number%10000)/1000)+((number%1000)/100)+((number%100)/10)+(number%10);
	
	
	
	cout<<sum<< endl;

	
}
#include <iostream>
using namespace std;
main (){
	int square_meters;
	int width;
	int height;
	int area;
	int walls;
	
	
	cout<< "Number of square meters you can paint: ";
	cin>> square_meters;

	cout<< "Width of the single wall (in meters): ";
	cin>> width;

	cout<< "Height of the single wall (in meters): ";
	cin>> height;

	area= width*height;
	walls= square_meters/area;
	cout<< "Number of walls you can paint: "<<walls<<endl;
}
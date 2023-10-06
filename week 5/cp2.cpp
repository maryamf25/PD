#include<iostream>
#include <cmath>
using namespace std;

string pyramid(float length, float height, float width, string unit);
main(){
    float length,  height,  width;
    string unit;
    cout << "Enter the length of the pyramid (in meters): ";
    cin >> length; 
    cout << "Enter the width of the pyramid (in meters): ";
    cin >> width;
    cout << "Enter the height of the pyramid (in meters): ";
    cin >> height; 
    cout << "Enter the desired output unit (milimeters, centimeters, meters, kilometers): ";
    cin >> unit; 
    // float answer =
     string answer=pyramid(length, height, width, unit);
    cout<< "The volume of the pyramid is: " <<answer;
}
string pyramid(float length, float height, float width, string unit){

    string result;
    string final_unit="cubic ";
    if(unit == "milimeters"){
        length = length* pow(10,-3);
        width = width * pow(10,-3);
        height = height * pow(10,-3);
        final_unit = final_unit+"milimeters";
    }
     if(unit == "meters"){
        
        final_unit = final_unit+ "meters";
    }
     if(unit == "centimeters"){
        length = length* 100;
        width = width * 100;
        height = height * 100;
        final_unit = final_unit+ "centimeters";
    }
     if(unit == "kilometers"){
        length = length* 1000;
        width = width * 1000;
        height = height * 1000;
        final_unit = final_unit+ "kilometers";
    }
    float volume= (length*width*height)/3;
    // cout<<final_unit<<endl;
    string start="The volume of the pyramid is: ";
    result= start + to_string(volume) + " " + final_unit;
    return result;
}
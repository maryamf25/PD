#include <iostream>
#include <cmath>
using namespace std;

string checkPointPosition(int h, int x, int y);
main(){

    int h ,x,y;
    cout << "Enter height: ";
    cin >> h;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
   string answer = checkPointPosition( h,  x,  y);
    cout << answer;
}

string checkPointPosition(int h, int x, int y){

        int height = h;
        int width = h;
        if(x <(2*h) && x > h ){
            height  = h*4;
            
        }
        if (y<h){
             width = h*3; 
        }
       
        string position;
       if(x <(2*h) && x > h && y>h && y<height){
             position="Inside";
       }
          else if(x < width && y < height){
            position="Inside";
        }
        else if(x<=width && y <= height) {
            position="Border";
        }
        else{
            position="Outside";
        }
        return position;
    }
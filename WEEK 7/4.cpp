#include <iostream>
using namespace std;

int generateTriangle(int num);

main(){
    int num;
    cout << "Enter number of Triangle: " ;
    cin >> num;
    int result = generateTriangle(num);
    cout << "Dots in the Triangle: " << result;
}
int generateTriangle(int num){
    int dots = 1;
   
   

    for (int x =1;x<=num;x++){
      
    dots = (x*(x+1))/2 ;
    }
    return dots;
}

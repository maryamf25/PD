#include <iostream>
using namespace std;

void generateSequence(int num);

main(){
    int num;
    cout << "Enter the number to Amplify: " ;
    cin >> num;
    generateSequence(num);
}
void generateSequence(int num){

    for (int x =1;x<=num;x++){
        if(x%4 == 0){
        cout << x*10;
         if(x <= num-1)
        {
            cout << ", ";
        }
        }
        else {
            cout << x;
             if(x <= num-1)
        {
            cout << ", ";
        }
        }
       
    }
}
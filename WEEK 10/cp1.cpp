#include<iostream>
using namespace std;
bool isLengthEven(int);

main (){
    string userString;
    cout << "Enter a String: ";
    getline(cin, userString);
    int length = userString.length();
    bool result = isLengthEven (length);
    cout << result;
}
bool isLengthEven(int length){
    if(length%2==0){
        return true;
    }
    else{
        return false;
    }
}
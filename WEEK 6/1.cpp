#include <iostream>
using namespace std;

string decideActivity(string temp, string humidity);
main(){
    string temp, humidity;

    cout << "Enter temperature (warm or cold): ";
    cin >> temp;
    cout << "Enter humidity (dry or humid): ";
    cin >> humidity;
    string answer = decideActivity(temp, humidity);
    cout << answer;
}
    string decideActivity(string temp, string humidity){

         if (temp == "warm" && humidity == "dry"){
            
            return "Recommended activity: Play tennis";
         }
         else if (temp == "warm" && humidity == "humid"){
            
            return "Recommended activity: Swim";
         }

        else if (temp == "cold" && humidity == "dry"){
            
            return "Recommended activity: Play basketball";
         }
         else if (temp == "cold" && humidity == "humid"){
            
            return "Recommended activity: Watch TV";
         }

    }

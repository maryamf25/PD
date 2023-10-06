#include<iostream>
using namespace std;

string projectTimeCalcultaion(int hours, int firm_days, int workers);
main(){
    int hours ,firm_days, workers;
    
    cout << "Enter the needed hours: ";
    cin >> hours; 
    cout << "Enter the days that the firm has: ";
    cin >> firm_days;
    cout << "Enter the number of all workers: ";
    cin >> workers;
    // projectTimeCalcultaion(hours,firm_days,workers);
    string answer =  projectTimeCalcultaion(hours,firm_days,workers);
    cout<<answer;
    // cout<< "The final price of a vehicle of type "<<code<< " after adding the tax is $"<< to_string(answer)<< ".";
}
string projectTimeCalcultaion(int hours, int firm_days, int workers){
    int total;
    string result;
    float training = 0.1*firm_days;
    float remaining_days = firm_days - training;
    // float req_days = hours/24;
    
    float working_hours = remaining_days * 8 * workers;
    float overtime = 2*remaining_days*workers;
    float hours_left= working_hours+overtime;
  
    
    if(hours_left < hours){
        total = hours - hours_left;
        result = "Not enough time! " + to_string(total) + " hours needed.";
        
        // cout<<"Not enough time! "<< total<<" hours needed.";
        
    }
    // return total;
    if(hours_left>=hours){
        total = hours_left -hours;
        result = "Yes! " + to_string(total) + " hours left.";
      
    }
    return result;
}
#include <iostream>
using namespace std;

float call(char code, char time, float mins, string service);
main()
{

    char code, time;
    float mins, bill;
    string service;

    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> code;
       if(code == 'P' || code == 'p'){
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> time;
       }
    cout << "Enter the number of minutes used: ";
    cin >> mins;
    
   
    bill = call(code, time, mins, service);
     cout << "Total Minutes Used: " << mins << " minutes" << endl;
    cout << "Amount Due: $" << bill;
   

   
    
    
}
float call(char code, char time, float mins, string service)
{
    float exmins;
    float result ;
    if ((code == 'R' || code == 'r') && (mins <= 50))
    {
        
        result = 10.00;
        cout << "Service Type: Regular" << endl;
    }
    else if ((code == 'R' || code == 'r') && (mins > 50))
    {
        
        exmins = mins - 50;
        result = (exmins * 0.20) + 10.00;
         cout << "Service Type: Regular" << endl;
    }
     if (code == 'P' || code == 'p')
    {
       
        if ((time == 'D' || time == 'd') && (mins <= 75))
        {
            result = 25.00;
        }
        else if ((time == 'D' || time == 'd') && (mins > 75))
        {

            exmins = mins - 75;
            result = exmins * 0.10 + 25.00;
        }
        
        else if ((time == 'N' || time == 'n') && (mins <= 100))
        {
            result = 25.00;
        }
        else if ((time == 'N' || time == 'n') && (mins > 100))
        {

            exmins = mins - 100;
            result = exmins * 0.05 + 25.00;
        }
         cout << "Service Type: Premium" << endl;
    }

    return result;
}

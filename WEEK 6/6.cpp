#include <iostream>
using namespace std;

string studio(int day,string month);
string apartment(int day,string month);
main()
{
    string month;
    int day;
    string  abill,sbill;
    

    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
     cout << "Enter the number of stays: ";
    cin >> day;
    
    abill = apartment(day, month);
    cout  << "Apartment: " << abill<< "$."<< endl;
    sbill = studio( day,month);
    cout  << "Studio: " << sbill <<"$.";
    
}
string studio(int day,string month){
    float sprice;
    if(month == "May" || month =="October"){
        sprice = 50.00;
        if(day>7 && day <=14){
            sprice = sprice - (0.05*sprice);
        }
        else  
        if(day>14){
            sprice = sprice - (0.3*sprice);
        }
    }
    else 
    if(month == "June" || month =="September"){
        sprice = 75.20;
        if(day>14){
            sprice = sprice - (0.2*sprice);
        }
    }
    else if(month == "July" || month =="August"){
        sprice = 76;
    }
    return to_string(sprice*day);
}
string apartment(int day,string month)
{   
    float aprice;
   
    if(month == "May" || month =="October"){
        aprice = 65;
      
    }
    else if(month == "June" || month =="September"){
        aprice = 68.70;
        
    }
    else if(month == "July" || month =="August"){
        aprice = 77;
    }
     if(day>14){
            aprice = aprice - (0.1*aprice);
        }
    return to_string(aprice*day);
}

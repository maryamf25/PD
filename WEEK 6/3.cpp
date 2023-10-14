#include <iostream>
using namespace std;


string zodiac( int DOB, string month);
main(){
     
    string sign, month;
    int DOB;
    

    cout << "Enter the day of birth: ";
    cin >> DOB;
    
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;
    
    sign = zodiac(DOB, month);
    cout << "Zodiac Sign: "<< sign;
}
string zodiac( int DOB, string month){

      
    if((month == "March" && DOB >= 21) || (month == "April" && DOB <= 19)){
        return "Aries";
    }
    else if((month == "April" && DOB >= 20) || (month == "May" && DOB <= 20)){
        return "Taurus";
    }
    else if((month == "May" && DOB >= 21) || (month == "June" && DOB <= 20)){
        return "Gemini";
    }
    else if((month == "June" && DOB >= 21) || (month == "July" && DOB <= 22)){
        return "Cancer";
    }
    else if((month == "July" && DOB >= 23) || (month == "August" && DOB <= 22)){
        return "Leo";
    }
    else if((month == "August" && DOB >= 23) || (month == "September" && DOB <= 22)){
        return "Cancer";
    }
    else if((month == "September" && DOB >= 23) || (month == "October" && DOB <= 22)){
        return "Libra";
    }
     else if((month == "October" && DOB >= 23) || (month == "November" && DOB <= 21)){
        return "Scorpio";
    }
     else if((month == "November" && DOB >= 22) || (month == "December" && DOB <= 21)){
        return "Sagittarius";
    }
     else if((month == "December" && DOB >= 22) || (month == "January" && DOB <= 19)){
        return "Capricon";
    }
     else if((month == "January" && DOB >= 20) || (month == "February" && DOB <= 18)){
        return "Aquarius";
    }
    }

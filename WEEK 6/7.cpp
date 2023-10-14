#include <iostream>
using namespace std;

string examTime(int hour, int minutes, int stdhour, int stdminutes, int examSminutes, int studentminutes);
int studentArrivalMinutes(int hour, int minutes, int stdhour, int stdminutes, int examSminutes, int studentminutes);
int studentArrivalHours(int hour, int minutes, int stdhour, int stdminutes, int examSminutes, int studentminutes);

string result (int ArrivalMinutes ,int ArrivalHours, string result1);
main()
{

    int hour, minutes, stdhour, stdminutes;
    string result1, condition;
    int ArrivalMinutes, ArrivalHours;

    cout << "Enter Exam Starting Time (hour): ";
    cin >> hour;
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> minutes;
    cout << "Enter Student hour of arrival: ";
    cin >> stdhour;
    cout << "Enter Student minutes of arrival: ";
    cin >> stdminutes;

    int examSminutes = (hour * 60) + minutes;
    int studentminutes = (stdhour * 60) + stdminutes;

    ArrivalMinutes = studentArrivalMinutes(hour, minutes, stdhour, stdminutes, examSminutes, studentminutes);

    ArrivalHours = studentArrivalHours(hour, minutes, stdhour, stdminutes, examSminutes, studentminutes);

   
   

    result1 = examTime(hour, minutes, stdhour, stdminutes, examSminutes, studentminutes);
    cout << result1 << endl;
 
    condition = result (ArrivalMinutes ,ArrivalHours, result1);
    cout << condition;
   
   
}
string examTime(int hour, int minutes, int stdhour, int stdminutes, int examSminutes, int studentminutes)
{

    string status;
    if ((examSminutes - studentminutes) > 30)
    {

        status = "Early";
    }
    else if (examSminutes < studentminutes)
    {

        status = "Late";
    }
    else if ((examSminutes == studentminutes) || ((examSminutes - studentminutes) <= 30))
    {

        status = "On time";
    }

    return status;
}
int studentArrivalMinutes(int hour, int minutes, int stdhour, int stdminutes, int examSminutes, int studentminutes)
{
    int overMinutes = 0;

    if (examSminutes > studentminutes && (examSminutes - studentminutes) < 60)
    {
        overMinutes = examSminutes - studentminutes;
    }
    else if (examSminutes < studentminutes && (studentminutes - examSminutes) < 60)
    {
        overMinutes = studentminutes - examSminutes;
    }
    else if ((examSminutes - studentminutes) >= 60)
    {

        overMinutes = (examSminutes - studentminutes) % 60;
        
    }
    else if ((studentminutes - examSminutes) >= 60)
    {
        overMinutes = (studentminutes - examSminutes) %60;
        
    }
    
    return overMinutes;
}
int studentArrivalHours(int hour, int minutes, int stdhour, int stdminutes, int examSminutes, int studentminutes)
{
    int overHours = 0;

    if (hour > stdhour && (hour - stdhour) >= 1 && (examSminutes - studentminutes) >= 60)
    {
        overHours = (examSminutes - studentminutes) / 60;
    }
    if (hour < stdhour && (stdhour - hour) >= 1 && (studentminutes - examSminutes) >= 60)
    {
        overHours = (studentminutes - examSminutes) / 60;
    }
   
    return overHours;
}

string result (int ArrivalMinutes ,int ArrivalHours, string result1){

    string Final;

     if (ArrivalHours < 1 && (ArrivalMinutes < 60 && ArrivalMinutes > 0) && (result1 == "Early" || result1 == "On time"))
    {
        Final = to_string(ArrivalMinutes)  + " minutes before the start" ;
    }
    else if (ArrivalHours < 1 && (ArrivalMinutes < 60 && ArrivalMinutes > 0) && result1 == "Late")
    {
        Final = to_string(ArrivalMinutes)  + " minutes after the start" ;
    }
    else if (ArrivalHours >=1 && (ArrivalMinutes < 60 && ArrivalMinutes >= 0) && (result1 == "Early" || result1 == "On time"))
    {
        Final = to_string(ArrivalHours) +  ":" +  to_string(ArrivalMinutes)  + " hours before the start";
    }
    else if (ArrivalHours >= 1 && (ArrivalMinutes < 60 && ArrivalMinutes >= 0) && result1 == "Late")
    {
        Final = to_string(ArrivalHours) +  ":" +  to_string(ArrivalMinutes)  + " hours after the start";
    }
    return Final;
}
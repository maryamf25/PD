#include <iostream>
#include <cmath>
using namespace std;

float calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main(){
    string yearType;
    int holidays, hometownWeekends;
    

    cout << "Enter year type: ";
    cin >> yearType;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends: ";
    cin >> hometownWeekends;
    float answer =  calculateVolleyballGames(yearType,holidays, hometownWeekends);
    cout << ceil(answer);
}

float calculateVolleyballGames(string yearType, int holidays, int hometownWeekends){

        float weekendsInSofia = 48 - hometownWeekends;
        
        float freeWeekends = 0.75 *weekendsInSofia;
        float playingInHolidays = (2*holidays)/3;
        float PlayingSundays = hometownWeekends;
        float DaysOfPlaying = freeWeekends + playingInHolidays + PlayingSundays;
        if (yearType == "leap"){
            DaysOfPlaying = DaysOfPlaying + (DaysOfPlaying*0.15);
        }
        return DaysOfPlaying;

    }

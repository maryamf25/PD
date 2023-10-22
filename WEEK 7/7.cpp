#include <iostream>
using namespace std;

void Hospital(int visitingDay);

main()
{
    int visitingDay;
    cout << "Enter Number of days you visited Hospital: ";
    cin >> visitingDay;
    Hospital(visitingDay);
}
void Hospital(int visitingDay)
{
    int y = 1;
    int patients = 0, treatedPatients = 0, untreatedPatients = 0, totalUntreatedPatients = 0, totalTreatedPatients = 0;
    
    for (int i = 1; i <= visitingDay; i++)
    {
        while (y <= i)
        {
            cout << "Number of patients who visited hospital on Day " << y << ": ";
            cin >> patients;

            if (patients > 7)
            {
                treatedPatients = 7;
                untreatedPatients = patients - 7;
            }
            else if (patients <= 7)
            {
                treatedPatients = patients;
                untreatedPatients = 0;
            }
            if (y>=3)
            {
                if (totalTreatedPatients < totalUntreatedPatients)
                {
                    if (patients > 8)
                    {
                        treatedPatients = 8;
                        untreatedPatients = patients - 8;
                    }
                    else if (patients <= 8)
                    {
                        treatedPatients = patients;
                        untreatedPatients = 0;
                    }
                 
                }
            }
            totalUntreatedPatients = totalUntreatedPatients + untreatedPatients;
            totalTreatedPatients = totalTreatedPatients + treatedPatients;
           

            y++;
        }
    }
    cout <<"Treated Patients: "<< totalTreatedPatients << endl;
    cout << "Untreated Patients: " <<totalUntreatedPatients;
}
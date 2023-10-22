#include <iostream>
#include <iomanip>

using namespace std;

void cargo(float count);

main()
{
    float count;
    cout << "Enter the count of cargo for transportation: ";
    cin >> count;
    cargo(count);
}
void cargo(float count)
{
    float y = 1.0;
    float tonnage = 0.0, minibus = 0.0, truck = 0.0, train = 0.0;

    for (float i = 1; i <= count; i++)
    {
        while (y <= i)
        {
            cout << "Enter the tonnage of cargo " << y << ": ";
            cin >> tonnage;
            if (tonnage <= 3)
            {
                minibus = minibus + tonnage;
            }
            else if (tonnage > 3 && tonnage <= 11)
            {
                truck = truck + tonnage;
            }
            else
            {
                train = train + tonnage;
            }
            y++;
        }
    }

    float sum = minibus + truck + train;

    float minibusPercentage = (minibus / sum) * 100.0;

    float truckPercentage = (truck / sum) * 100.0;

    float trainPercentage = (train / sum) * 100.0;

    float avg = ((minibus * 200) + (truck * 175) + (train * 120)) / sum;
    cout << fixed << setprecision(2) << avg << endl;
    cout << fixed << setprecision(2) << minibusPercentage <<"%"<< endl;
    cout << fixed << setprecision(2) << truckPercentage <<"%"<< endl;
    cout << fixed << setprecision(2) << trainPercentage <<"%"<< endl;
}
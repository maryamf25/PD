#include <iostream>
#include <cmath>
using namespace std;
string containsSeven(int numbers[], int size);
bool getDigits(int num);

main()
{

    int size, input, j = 1;
    cout << "Enter the size of Array: ";
    cin >> size;
    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << j << ": ";
        cin >> input;
        numbers[i] = input;
        j++;
    }
    string result = containsSeven(numbers, size);
    cout << result;
}
string containsSeven(int numbers[], int size)
{
    int y = 0;
    for (int i = 0; i < size; i++)
    {

        bool seven = getDigits(numbers[i]);

        if (seven)
        {
            y++;
        }
    }
    if (y > 0)
    {
        return "Boom!";
    }
    else
    {
        return "there is no 7 in the array";
    }
}
bool getDigits(int num)
{
    int TotalDigits = 0;
    int DividingNumber = 1;
    int NumberAfterDivision;

    while (num / DividingNumber != 0)
    {
        NumberAfterDivision = num / DividingNumber;
        DividingNumber *= 10;
        TotalDigits++;
    }

    float power;
    int powerOfTen;
    int loopCondition = 1;
    int Digit = 0;
    int x = 0;
    while (loopCondition <= TotalDigits)
    {
        power = pow(10, TotalDigits - loopCondition);

        powerOfTen = power;
        Digit = num / powerOfTen;
        num = num % powerOfTen;
        loopCondition++;

        if (Digit == 7)
        {
            x++;
        }
    }
    if (x > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
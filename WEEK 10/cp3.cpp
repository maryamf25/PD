#include <iostream>
using namespace std;
bool isRepeatingCycle(int arr[], int length, int cycle);

main()
{
    int arrLength, cycleLength;
    int digits[100];
    cout << "Enter the length of the array: ";
    cin >> arrLength;
    digits[arrLength];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < arrLength; i++)
    {
        cin >> digits[i];
    }
    cout << "Enter the length of the cycle: ";
    cin >> cycleLength;
    bool result = isRepeatingCycle(digits, arrLength, cycleLength);
    cout << "Output: " << result;
}
bool isRepeatingCycle(int arr[], int length, int cycle)
{
    string result = "false";
    if (cycle > length)
    {
        result = "true";
    }
    else
    {
        for (int x = 0; x < length; x++)
        {

            if (x + cycle < length)
            {
                if (arr[x] == arr[x + cycle])
                {
                    result = "true";
                }
                else
                {
                    result = "false";
                }
            }
        }
    }

    if (result == "true")
    {
        return true;
    }
    else
    {
        return false;
    }
}

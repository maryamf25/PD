#include <iostream>
using namespace std;
bool canBeArranged(int arr[], int size);
bool isAlreadyEntered(int arr[], int size, int num);
main()
{
    int arrLength, x = 0;
    bool result, output;
    cout << "Enter the length of the array: ";
    cin >> arrLength;
    int digits[arrLength];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < arrLength; i++)
    {
        cin >> digits[i];
    }
    for (int i = 0; i < arrLength; i++)
    {
        result = isAlreadyEntered(digits, arrLength, digits[i]);
        if (result==1)
        {
            x++;
        }
        else if(result==0)
        {
            x=0;
        }
    }
    if (x > 0)
    {
        output = false;
        cout << "if: " << output;
    }
    else
    {
        output = canBeArranged(digits, arrLength);
        cout << "Can be arranged: " << output;
    }
}
bool isAlreadyEntered(int arr[], int size, int num)
{
    int i = 0;
    for (int x = 0; x < size; x++)
    {
        if (num == arr[x])
        {
            i++;
        }
    }
    if (i==size)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool canBeArranged(int arr[], int size)
{
    int limit = size-1;
    int ascendingArr[size];
    for (int x = 0; x < size; x++)
    {
        int count = 0;
        for (int i = 0; i < size; i++)
        {
if (arr[x] < arr[i])
            {
                count++;
            }
        }
        ascendingArr[limit - count] = arr[x];
    }
    int m = 0;
    for (int n = 0; n < size; n++)
    {
        if(ascendingArr[n]==(ascendingArr[n+1]-1)){
            m++;
        }
    }
    if(m==limit){
        return true;
    }
    else{
        return false;
    }
}

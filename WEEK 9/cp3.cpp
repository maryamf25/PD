#include <iostream>
#include <cmath>
using namespace std;
bool isIdentical(string numbers[], int size);


main()
{

    int size, j = 1;
    string input;
    cout << "Enter the size of Array: ";
    cin >> size;
    string numbers[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << j << ": ";
        cin >> input;
        numbers[i] = input;
        j++;
    }
    bool result = isIdentical(numbers, size);
    cout << result;
}
bool isIdentical(string numbers[], int size)
{
    int y = 0;

    int f = 0;

    while (y < size)
    {
        int m = 0;
        for (f = 0; f < size; f++)
        {
            if (numbers[y] == numbers[f])
            {
                m++;
            }
        }
        if (m == size)
        {

           
            return true;
        }
        else
        {

            return false;
        }
    }
}
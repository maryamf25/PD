#include <iostream>
using namespace std;
string SevenSegmentDisplay(string arr[], int size);
bool isvalid(string word, int limit);
string findLargest(string array[], int length);

main()
{
    int size;
    cout << "Enter the number of words: ";
    cin >> size;
    if (size > 0)
    {
        cout << "Enter the words, one by one: " << endl;
        string inputArray[size], input;
        int i = 0;
        while (i < size)
        {

            cin >> input;
            inputArray[i] = input;
            i++;
        }
        string result = SevenSegmentDisplay(inputArray, size);
        cout << "Longest 7-segment word: " << result;
    }
    else
    {
        cout << "Invalid input. input of elements must be greater than 0.";
    }
}
string SevenSegmentDisplay(string arr[], int size)
{

    int x = 0;
    int y = 0;
    int b = 0;
    string newArray[100];
    for (int i = 0; i < size; i++)
    {
        int length = arr[i].length();
        if (isvalid(arr[i], length))
        {
            newArray[b] = arr[i];
            b++;
            x++;
        }
        else
        {
            y++;
        }
    }

    string large = findLargest(newArray, x);
    return large;
}
string findLargest(string array[], int length)
{

    int h = 0;
    int f = 0;

    string largest = "";
    while (h < length)
    {
        int m = 0;
        for (f = 0; f < length; f++)
        {
            if ((array[h].length()) > (array[f].length()))
            {
                m++;
            }
        }
        if (m == length - 1)
        {

            largest = array[h];
            return largest;
        }
        else
        {

            h++;
        }
    }
}
bool isvalid(string word, int limit)
{

    for (int j = 0; j < limit; j++)
    {

        if ((word[j] == 'k') || (word[j] == 'm') || (word[j] == 'v') || (word[j] == 'w') || (word[j] == 'x'))
        {

            return false;
        }
    }

    return true;
}

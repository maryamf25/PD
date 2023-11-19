#include <iostream>
using namespace std;
int progress(int arr[], int size);

main()
{
    int Saturdays, miles[100];
    cout << "Enter the number of Saturdays: ";
    cin >> Saturdays;
    miles[Saturdays];
    for (int i = 0; i < Saturdays; i++)
    {
        cout << "Enter miles run for Saturday " << i + 1 << ": ";
        cin >> miles[i];
    }
    int result = progress(miles, Saturdays);
    cout << "Total progress days: " << result;
}
int progress(int arr[], int size)
{
    int progress = 0;
    for (int x = 0; x < size; x++)
    {
        if (x > 0)
        {
            if (arr[x] > arr[x - 1])
            {
                progress++;
            }
        }
    }
    return progress;
}
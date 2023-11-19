#include <iostream>
using namespace std;
string order(int arr[]);

main()
{
    int packages[10];
    cout << "Enter the weights of the 10 packages: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> packages[i];
    }
    string result = order(packages);
    cout << "Sorted array in ascending order: " << result;
}
string order(int arr[])
{
   
    int limit = 9;
    int ascendingArr[10];
    string result ="[";
    for (int x = 0; x < 10; x++)
    {
         int count = 0;
        for (int i = 0; i < 10; i++)
        {
           
            if (arr[x] < arr[i])
            {
                count++;
            }
        }
        ascendingArr[9 - count] = arr[x];
    }
   
    for (int y = 0; y < 10; y++)
    {
        result+= to_string(ascendingArr[y]);
        if(y!=9){
            result+=", ";
        }

    }
    result+="]";
    return result;
}

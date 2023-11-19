#include <iostream>
using namespace std;
int specialValue(int arr[], int size);
bool isAlreadyEntered(int arr[], int size, int num);
main()
{
    int arrLength;
    cout << "Enter the length of the array: ";
    cin >> arrLength;
    int nums[arrLength];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < arrLength; i++)
    {
        cin >> nums[i];
    }
    int result = specialValue(nums, arrLength);
    cout << "Special value: " << result;
}
int specialValue(int arr[], int size)
{
    int special=0;
    int count = 0;
    int zero = 0;
    int result=0;
   
    for(int i=0; i<size; i++){
         if(arr[i]!=0)
        {
            count++;
        }
    }
     for(int i=0; i<size; i++)
     {
       if(arr[i]>=count)
        {
            special++;
        }
    }
    if(count==special)
    {
        result = count;
    }
    if(result==0) {
        result =-1;
    }
   
    return result;
}
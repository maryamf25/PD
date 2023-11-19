#include <iostream>
#include <cmath>
using namespace std;
void evenOddTransform(int arr[], int size, int n);


main()
{

    int size, j = 1, n;
    int input;
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
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> n;
     evenOddTransform(numbers, size,n);
   
}
void evenOddTransform(int arr[], int size, int n){
    int newArray[size];
    cout << "[";
    for (int i = 0; i<n ;i++){
          for (int f = 0; f < size; f++)
        {
            if (arr[f]%2==0){
             
                arr[f]=  arr[f]-2;
                 newArray[f] = arr[f];
            }
            else {
                 arr[f] = arr[f]+2;
                 newArray[f] = arr[f];
            }
            // cout << newArray[f] << endl;
           if(i==n-1 && f==size-1){
            cout << newArray[f] ;
           }
           else if (i==n-1){
            cout << newArray[f] << ", ";
           }
        
        }
         
        }
        cout << "]";
       
   
}

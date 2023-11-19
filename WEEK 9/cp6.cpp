#include <iostream>
using namespace std;
int coloringTime(string cols[], int size);

main()
{

    int size, j = 1, n;
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
     int result = coloringTime(numbers, size);
     cout << "Time to color: "<<result << " seconds";
   
}
int coloringTime(string cols[], int size)
{
    int time=0;
    
    int timeForColor = 2*size;
    
    for ( int i=0; i<size-1; i++){
        if(cols[i]!=cols[i+1]){
                 time+=1;
        }
       

    }
    int total = time+ timeForColor;
    return total;
  
}
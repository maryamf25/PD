#include <iostream>
using namespace std;
int spin(string arr[], int size);

main()
{
    int arrLength;
    cout << "Enter the length of the array: ";
    cin >> arrLength;
    string rotations[arrLength];
    cout << "Enter the elements of the array (\"left\" or \"right\"): " << endl;
    for (int i = 0; i < arrLength; i++)
    {
        cin >> rotations[i];
    }
    int result = spin(rotations, arrLength);
    cout << "Number of full rotations: " << result;
}
int spin(string arr[], int size)
{
    int rotation = 0;
    for(int i=0; i<size; i++){
        if(arr[i]=="right"){
            rotation+=90;
        }
        else if(arr[i]=="left"){
            rotation-=90;
        }
    }
    rotation/=360;
    if(rotation<0){
        rotation*= -1;
    }
    return rotation;
}
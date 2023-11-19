#include <iostream>
using namespace std;
int boxes(int arr[], int size, int box);

main()
{
    int num;
    int digits[100];
    int size = 0;
    cout << "Enter the number of boxes: ";
    cin >> num;
    digits[num];
    cout << "Enter the dimensions of the boxes (length, width, height): "<< endl;
    for (int i = 0; i < num * 3; i++)
    {
        cin >> digits[i];
        size++;
    }
    int result = boxes(digits, size, num);
    cout << "Total volume of all boxes: " << result;
}
int boxes(int arr[], int size, int box)
{
    int sum = 0;
    int product = 0;

    for (int x = 0; x <size; x+=3)
    {
        product = arr[x]*arr[x+1]*arr[x+2];
        sum += product;
    }
    return sum;
}



#include <iostream>
using namespace std;

void printUpperPart(int rows);

void printLowerPart(int rows);
main()
{
    int rows;
    cout << " Enter desired number of rows: ";
    cin >> rows;
    printUpperPart(rows);
    printLowerPart(rows);
}
void printUpperPart(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows - i; j >= 1; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
void printLowerPart(int rows)
{
    for (int i = rows; i >= 1; i--)
    {
        for (int j = rows - i; j >= 1; j--)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << "*";
        }

        cout << endl;
    }
}

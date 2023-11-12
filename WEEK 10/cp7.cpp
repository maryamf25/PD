#include <iostream>
#include <string>
using namespace std;
void convertPINToDance(string pin);

main()
{
    string input;
    int count = 0;
    cout << "Enter your PIN (4 digits): ";
    cin >> input;
    int length = input.length();
    if (length == 4)
    {
        if (isdigit(input[0]) && isdigit(input[1]) && isdigit(input[2]) && isdigit(input[3]))
        {
            convertPINToDance(input);
        }
        else
        {
            cout << "Invalid input.";
        }
    }
    else
    {
        cout << "Invalid input.";
    }
}
void convertPINToDance(string pin)
{
    string MOVES[10] = {"Shimmy", "Shake", "Pirouette",
                        "Slide", "Box Step", "Headspin", "Dosado",
                        "Pop", "Lock", "Arabesque"};
    int move,m=0;
    string selectedMoves[4];
    int pinlength = pin.length();
    for (int i = 0; i < pinlength; i++)
    {
        int asciiCode = pin[i];
        int digit = asciiCode - '0';
        move = i + digit;

        if (move > 9)
        {
            move = m;
            m++;
        }
        selectedMoves[i] = MOVES[move];
    }
    for (int j = 0; j < pinlength; j++)
    {
        cout << selectedMoves[j];
        if (j != (pinlength - 1))
        {
            cout << ", ";
        }
    }
}
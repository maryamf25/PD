#include <iostream>
using namespace std;
int occurrence(string arr[], int size, char character);
int checkCharacter(string word, char letter);

main()
{
    int num;
    string words[100];
    char ch;
    cout << "Enter how many words you want to enter: ";
    cin >> num;
    words[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> words[i];
    }
    cout << "Enter the letter you want to count: ";
    cin >> ch;
    int result = occurrence(words, num, ch);
    cout << ch << " shows up " << result << " times in the data.";
}
int occurrence(string arr[], int size, char character)
{
    int count = 0;
    int check;
    for (int x = 0; x < size; x++)
    {
        check = checkCharacter(arr[x], character);
        count += check;
    }
    return count;
}
int checkCharacter(string word, char letter)
{
    int i = 0;
    for (int x = 0; x < word.length(); x++)
    {
        if (letter == word[x])
        {
            i++;
        }
    }
    return i;
}
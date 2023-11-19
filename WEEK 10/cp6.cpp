
#include <iostream>
using namespace std;
string order(string words);
int countWords(string arr);

main()
{
    string words;
    cout << "Enter a string: ";
    getline(cin, words);
    string result = order(words);
    cout << "Reversed string: " << result;
}
string order(string words)
{
    int number = countWords(words);
    string reverse[number + 1];
    string word = "";
    int idx = 0;
    int count = 0;
    for (int x = 0; x < words.length(); x++)
    {
        if (words[x] != ' ')
        {
            word += words[x];
        }
        else
        {
            reverse[count] = word;
            word = "";
            count++;
        }
    }
    if (count == number)
    {
        reverse[count] = word;
    }
    string result = "";
    for (int i = number; i >= 0; i--)
    {
        result += reverse[i];
        if (i != 0)
        {
            result += " ";
        }
    }
    return result;
}
int countWords(string arr)
{
    int count = 0;
    for (int x = 0; x < arr.length(); x++)
    {
        if (arr[x] == ' ')
        {
            count++;
        }
    }
    return count;
}

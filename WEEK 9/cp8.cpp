#include <iostream>
using namespace std;
string findBrokenKeys(string correctPhrase, string actualTyped);
string UniqueKeys(string s);
bool isAlreadyEntered(string arr, int size, char ch);

main()
{
    string s1, s2;
    cout << "Enter the correct phrase: ";
    getline(cin, s1);
    cout << "Enter what you actually typed: ";
    getline(cin, s2);
    string result = findBrokenKeys(s1, s2);
    cout << "Broken keys: " << result;
}
string findBrokenKeys(string correctPhrase, string actualTyped)
{

    string newPhrase= "";
   
    string finalPhrase = "";
    int m = 0;
    bool check;
    int j =0;
    int length = correctPhrase.length();
    for (j = 0; j < correctPhrase.length(); j++)
    {
         if (correctPhrase[j] != actualTyped[j])
        {
            newPhrase+= correctPhrase[j];
            m++;
           }
    }

    string unique = UniqueKeys(newPhrase);
    return unique;
        
    }

string UniqueKeys(string s)
{
   
    int  i = 0,x=0;
    string makeArray="";
    bool check;
    while (i < s.length())
    {

      
        
        check = isAlreadyEntered(s, i, s[i]);

        if (check==0)
        {
            makeArray = makeArray + s[i];
            
        }

         if (check==1)
        {
           x++;
        }

        i++;
    }

    return makeArray;
}
bool isAlreadyEntered(string arr, int size, char ch)
{

    int i = 0 ;
    for (int j = 0; j < size; j++)
    {

        if (ch == arr[j])
        {
            i++;
        }
    }
    if(i>0){
        return true;
    }
    else { 
        return false;
    }
}
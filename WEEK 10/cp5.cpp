#include <iostream>
using namespace std;
int commonCharacters(string s1, string s2);

main()
{
  string s1, s2;
  cout << "Enter the first string: ";
  cin >> s1;
  cout << "Enter the second string: ";
  cin >> s2;
  int result = commonCharacters(s1, s2);
  cout << "Number of common characters: " << result;
}
int commonCharacters(string s1, string s2)
{
  int length1 = s1.length();
  int length2 = s2.length();
  int common = 0;
  int i = 0;
  for (int j = 0; j < s1.length(); j++)
  {
    i = 0;
    while (i < s2.length())
    {
      if (s1[j] == s2[i])
      {
        common++;
        s2[i] = s1[length1];
        break;
      }
      i++;
    }
  }
  return common;
}

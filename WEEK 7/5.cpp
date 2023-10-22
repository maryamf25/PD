#include <iostream>

using namespace std;

bool isPrime(int num);

main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    bool result = isPrime(num);
    cout << result;
}
bool isPrime(int num)
{

    if (num <= 1)
    {
        return false;
    }
    else
    {
        for (int x = 2; x <= num-1; x++)
        {
            if (num % x == 0)
            {
                return false;
            }
        }
        return true;
    }
}

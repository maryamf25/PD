#include <iostream>

using namespace std;

int primorial(int num1);
bool isPrime(int num);
int i = 2;

main()
{
    int num1;

    cout << "Enter Number: ";
    cin >> num1;

    bool result = isPrime(i);

    int result2 = primorial(num1);
    cout << result2;
}

bool isPrime(int num)
{

    if (num <= 1)
    {
        return false;
    }
    else
    {
        for (int x = 2; x <= num - 1; x++)
        {
            if (num % x == 0)
            {
                return false;
            }
        }
        return true;
    }
}

int primorial(int num1)
{

    int product = 1;
    int j = 1;
    while (j <= num1)

    {

        if (isPrime(i))
        {

            product = product * i;
            j++;
        }
        i++;
    }

    return product;
}
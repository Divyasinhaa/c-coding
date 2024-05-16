#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    bool isprime = 1;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            isprime = 0;
            break;
        }
        if (isprime == 0)
        {
            cout << "is not a prime number" << endl;
            
        }
        else
        {
            cout << "is prime number" << endl;
        }
    }
}
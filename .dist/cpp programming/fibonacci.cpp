#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; //no of items to be stored
    int a = 0;
    int b = 1;
    cout << a << b << endl;
    for (int i = 0; i <= n; i++)
    {
        int nextno = a + b;
        cout << nextno << endl;
        a = b;
        b = nextno;
    }
}

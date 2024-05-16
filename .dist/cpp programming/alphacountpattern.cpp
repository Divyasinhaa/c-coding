#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0; // no of rows

    while (i <= n)
    {
        int j = 1; // no of columns
        while (j <= n)
        {
            char ch = 'A' + i+ j - 1;
            cout << ch;
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl; // used for enter or next line
        i = i + 1;
    }
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)//printing number till n
    {
        if(i%2==0){//printing the even numbers till n
            cout<< i <<endl;
        }
        
    }
}
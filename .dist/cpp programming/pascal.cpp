#include <iostream>
using namespace std;
void printPascal(int n)
{
      
for (int i = 1; i <= n; i++)
{
    int C = 1; // used to represent C(line, i)
    for (int j= 1; j <= i; j++) 
    {
          
        // The first value in a line is always 1
        cout<< C<<" "; 
        C = C * (i - j) / j; 
    }
    cout<<"\n";
}
}
  
// Driver code
int main()
{
    int n;
    cout<<"enter the number you want to enter";
    cin>>n;
    printPascal(n);
    return 0;
}
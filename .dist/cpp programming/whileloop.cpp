#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int n=2;
    int sum=0;
    while(n <= a)  
    {  
        if(n%2 == 0)  
        {  
            sum = sum + n;  
        }  
        n=n+1;
    }  
    cout<<"the sum of numbers till n is:"<<sum<<endl;

}
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int n=1,b=1;
    while(b<=a){
        n=n*b;
        b++;
    }
    cout<< "the factorial is"<< n <<endl; 
}
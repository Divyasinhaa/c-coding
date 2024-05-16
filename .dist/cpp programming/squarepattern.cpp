#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int i=1;//no of rows
    while(i<=a){
        int j=1;//no of columns
        while(j<=a){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;//used for enter or next line
        i=i+1;
    }
}
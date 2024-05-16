#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;//no of rows
    int count=1;
    while(i<=n){
        int j=1;//no of columns
        while(j<=i){
            cout<<count;
            count=count+1;
            j=j+1;
            
        }
        cout<<endl;//used for enter or next line
        i=i+1;
    }
}
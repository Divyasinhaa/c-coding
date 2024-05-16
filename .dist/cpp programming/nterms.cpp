#include <iostream>
using namespace std;
int printn(int n){
    for(int i=0;i<n;i++){
        cout<< i << " ";
        ;
    };
}
int main(){
    int a;
    cout<<"print a";
    cin>>a;
    int sequence=printn(a);
    cout<<sequence<<endl;
}
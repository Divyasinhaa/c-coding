#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch<100 && ch>64){
        cout << "this is alphabet" <<endl;
    }
    else if (ch<63 || ch>41)
    {
        cout<< "this is numeric" <<endl;
    }
    else{
        cout<< "this is lowercase" <<endl;
    }
    
}
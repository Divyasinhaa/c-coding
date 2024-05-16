#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] <<"";

    }
    cout<<endl;
}
int swapalter(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
        
    }
    return 0;
}

int main(){
    int arr[4]={1,2,3,4};
    swapalter(arr,4);
    printarray(arr,4);
    
}
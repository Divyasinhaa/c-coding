#include<iostream>
using namespace std;
void update(int array[],int size){
    array[0]=123;
    for(int i=0;i<size;i++){
        cout<<array[i];
    }
}

int main(){
    int arr[3]={1,67,98};
    update(arr,3);
    for(int i=0;i<3;i++){
        cout<<arr[i];
    }
    return 0;
}
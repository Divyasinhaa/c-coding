#include <iostream>
using namespace std;
int max(int arr[],int n){
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int min(int arr[],int n){
    int min=INT16_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int size;
    cin>>size;
    int array[50];
    for(int i=0;i<size;i++){
        cin>> array[i];

    }
    cout<< "maximum number is" << max(array,size) <<endl;
    cout<< "minimum number is" << min(array,size) <<endl;
    return 0;
}
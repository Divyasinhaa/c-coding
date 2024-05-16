#include<iostream>
using namespace std;
int peeksearch(int arr[],int n ){
    int s=0;
    int e=n-1;
    int mid=s+e/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            
            s=mid+1;

        }
        else{
            e=mid;
        }
        
        mid=s+e/2;
    }
    return s;
}
int main(){
    //cin>>"the peek value of the array is";
    int arr[5]={3,1,4,6,2};
    int peek=peeksearch(arr,5);
    cout<< peek <<endl;
}
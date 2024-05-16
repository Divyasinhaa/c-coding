#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
        int start=0;
        int end=n-1;
        int mid=(start+end)/2;
        while(start<=end){
        if(key==arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else 
        {
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int key;
    cin>>key;
    bool found=binarysearch(arr,5,key);
    cout<< found <<endl;
}
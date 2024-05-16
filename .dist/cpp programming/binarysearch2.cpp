#include <iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int key;
    cin>>key;
    int even[6]={1,6,9,10,12,14};
    int found=binarysearch(even,6,key);
    cout<< found <<endl;
}
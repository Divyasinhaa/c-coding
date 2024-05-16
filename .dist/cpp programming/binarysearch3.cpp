#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    for(int i=0;i<n;i++){
        if(key==arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int key;
    cin>>key;
    int even[6]={1,2,3,4,5,6};
    int found=binarysearch(even,6,key);
    cout<< found <<endl;
}
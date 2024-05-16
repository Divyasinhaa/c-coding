#include <iostream>
using namespace std;
int pivotsearch(int arr[],int n){
    int s=0;
    int end=n-1;
    int mid=s+(end-s)/2;
    while(s<end){
        if(arr[mid]>=arr[0]){

        
        s=mid+1;
        }
        else{
            end=mid;
        }
        mid=(s+end)/2;
    }
    return s;
}
int main(){
    int arr[5]={2,3,1,4,5};
    int search=pivotsearch(arr,5);
    cout<<search<<endl;
}
int Binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+e/2;
    while(s<=e){
        if(key==arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+e/2;
    }
    return -1;
}
int searchrotated(int arr[],int n,int key){
    if(key>=arr[pivotsearch] && key<=arr[n-1]){
        return Binarysearch(arr,pivotsearch,n-1,key);
    }
    else{
        return Binarysearch(arr,0,pivotsearch-1,k);
    }
}
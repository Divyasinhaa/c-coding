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
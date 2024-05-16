#include<iostream>
using namespace std;
int findduplicate(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
        
    }
    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
    
    int arr[9]={1,2,1,2,3,12,21,21,12};
    int duplicate=findduplicate(arr,9);
    cout<< duplicate <<endl;
}
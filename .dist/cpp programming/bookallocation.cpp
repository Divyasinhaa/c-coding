#include <iostream>
using namespace std;

bool isPossible(vector<int> arr,int n,int m,int mid){
    int stdcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i] <=mid){
            pagesum=pagesum+arr[i];
        }
        else{
            stdcount++;
            if(stdcount> m || arr[i]>mid){
                return false;
            }
            
            pagesum=arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> arr,int n,int m){
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int end=sum;
    int ans=-1
    int mid=start+(end-start)/2;
    
    while(start<=end){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            sum=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

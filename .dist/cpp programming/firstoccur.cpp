#include<iostream>
using namespace std;
int firstoccu(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int r= -1;
    while(s<=e){
        if(k==arr[mid]){
            r=mid;
            e=mid-1;
        }
        if(k>arr[mid]){
            s=mid+1;
        }else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return r;
  }
int last(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int r= -1;
    while(s<=e){
        if(k==arr[mid]){
            r=mid;
            s=mid+1;
        }
        if(k>arr[mid]){
            s=mid+1;
        }else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return r;
  }


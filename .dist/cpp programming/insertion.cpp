#include <iostream>
using namespace std;
int insertion(int arr[],int n,int noe,int pos,int key){
    if(noe==n){
        cout<< "overflow";
    }
    else if(pos>noe){
        cout<< "invalid";
    }
    int i=noe-1;
    while(i>=pos){
        
        arr[i+1]=arr[i];
        i--;
        arr[i+1]=key;
    }
    noe++;;
}
int Printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int pos,key;
    cout<<"enter position";
    cin>>pos;
    cout<<"enter key";
    
    cin>>key;
    int arr[10]={0,2,3,4,5,6,7,8,9,10};
    cout<<insertion(arr,10,5,pos,key)<<endl;
    cout<<Printarray(arr,10);
    return 0;
}

#include <iostream>
using namespace std;
int deletion(int arr[],int noe,int pos){
    if(noe==0){
        cout<<"empty array";
    }
    else if(pos>noe-1){
        cout<<"invalid index";
    }
    int i=pos;
    while(i<noe-1){
        arr[i]=arr[i+1];
        i++;
        
    }
    noe--;
}
int Printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int pos;
    cout<<"enter position";
    cin>>pos;
    
    int arr[5]={1,2,3,4,5};
    cout<<deletion(arr,5,pos)<<endl;
    cout<<Printarray(arr,3);
    return 0;
}


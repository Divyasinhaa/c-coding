#include<iostream>
using namespace std;
int maxarray(int number[],int n){
    int max = INT16_MIN;
    for(int i=0;i<n;i++){
        
        if(number[i]>max){
            max=number[i];
        }
    }
    return max;
    cout<< "the max number in the array" <<max;
}
int minarray(int number[],int n){
    int min = INT16_MAX;
    for(int i=0;i<n;i++){
        if(number[i]<min){
            min=number[i];
        }
    }
    return min;
}
int main(){
    int size;
    cin>>size;
    int array[50];
    for(int i=0;i<size;i++){
        cin>> array[i];

    }
    cout<< "maximum number is" << maxarray(array,size) <<endl;
    cout<< "minimum number is" << minarray(array,size) <<endl;
    return 0;
}
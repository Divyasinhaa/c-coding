#include<iostream>
using namespace std;
void array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<< arr[i] << " " <<endl;
    }
}
int main(){
    int number[5]={1,2,3,4,5};
    cout<< "Value at 4th postion" << number[4] <<endl;
    int numbersize=sizeof(number)/sizeof(int);
    cout<< "size of array is" << numbersize <<endl;
}
#include <iostream>
using namespace std;
int main(){
    int arr[1][3]={1,2,3};
    int arr2[3][1]={1,
                    2,
                    3};
    int arr3[3][3]=int arr[1][3] * int arr2[3][1];
    cout<< arr3[3][3] << " "; 
    cout<<endl;
}
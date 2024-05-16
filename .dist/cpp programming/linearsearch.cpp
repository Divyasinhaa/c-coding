#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
        
    }
    return 0;
}
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int key;
    cin >> key;
    bool found=search(arr,5, key);
    if (found)
    {
        cout<< "key is presnt" <<endl;
    }
    else
    {
        cout<<"key is not presnt" <<endl;
    }
}

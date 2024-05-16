#include <iostream>
using namespace std;
int reverse(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        reverse(arr, arr + size);
    }
    return 0;
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 5, 3, 2};
    reverse(arr, 10);
    cout << reverse << endl;
}
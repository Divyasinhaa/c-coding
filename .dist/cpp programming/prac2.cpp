#include <iostream>
using namespace std;
int main() {
int n;

cout << "Enter the number of integers in the list: ";
cin >> n;
if (n <= 0) {

cout << "Invalid input. Please enter a positive number." <<
endl;
return 1; 
}
int num, largest, smallest;

cout << "Enter " << n << " integers, separated by spaces: ";
cin >> num;
largest = smallest = num; 
for (int i = 1; i < n; ++i) {
cin >> num;

if (num > largest) {
largest = num; // Update the largest number
}
if (num < smallest) {
smallest = num; // Update the smallest number
}
}
cout << "The largest number in the list is: " << largest <<
endl;
cout << "The smallest number in the list is: " << smallest <<
endl;
return 0;
}
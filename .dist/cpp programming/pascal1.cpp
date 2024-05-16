#include <iostream>
void printPascalTriangle(int rows) {
for (int i = 0; i < rows; i++) {
int number = 1;
// Print spaces for alignment
std::cout << std::string(rows - i - 1, ' ');
for (int j = 0; j <= i; j++) {
// Print the current number and calculate the next number
std::cout << number << " ";
number = number * (i - j) / (j + 1);
}
std::cout << std::endl;
}
}
int main( ) {
int numberOfRows;
std::cout << "Enter the number of rows for Pascal's Triangle: ";
std::cin >> numberOfRows;
if (numberOfRows <= 0) {
std::cout << "Please enter a positive number of rows." <<
std::endl;
return 1;
}
std::cout << "Pascal's Triangle:" << std::endl;
printPascalTriangle(numberOfRows);
return 0;
}
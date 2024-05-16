#include <iostream.h>
using namespace std;
void printAP(int a, int d, int n) {
int curr_term;
curr_term=a;
for (int i = 1; i <= n; i++){
cout << curr_term << " ";
curr_term =curr_term + d;
}
}
int main(){
int a,d,n;

cout << "Enter a number: ";
cin >> a;
cout << "Enter difference: ";
cin >> d;
cout << "Enter number of terms: ";
cin >> n;

printAP(a, d, n);
return 0;
}
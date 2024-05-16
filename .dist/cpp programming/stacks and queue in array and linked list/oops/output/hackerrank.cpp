#include <iostream>
#include <string>
using namespace std;

int main() {
  string a;
  string b;
  cin>>a;
  cin>>b;
  cout<< a.length() <<" "<< b.length() <<endl;
  cout<< a+b<<endl;
  char c;
    c = a[0];
    a[0] = b[0];
    b[0] = c;

    cout << a << " " << b;
  return 0;
}
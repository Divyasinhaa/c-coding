#include <iostream>
using namespace std;
class student{
public:
    string name;
    int roll_no;

    student(){
        this->name="divya";
        this->roll_no=23;
    }
};
int main(){
    student *divya=new student();
    divya->name="divya";
    divya->roll_no=23;
    cout<<divya->name<<"-"<<divya->roll_no<<endl;
    
}
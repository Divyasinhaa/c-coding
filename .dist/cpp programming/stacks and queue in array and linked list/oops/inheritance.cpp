#include <iostream>
using namespace std;

class parent{
    public:
    int x;

};
class parent2{
    public:
    int y;
};

class child1: public parent , public parent2


{

};
class child2: protected parent{
    //here x will be protected
    //y will not be accesible
    //z will be protected
};
class child3: private parent{
    //here x will be private
    //y will not be accesible
    //z will be private
};
int main(){
    parent c;
    print(c);
}
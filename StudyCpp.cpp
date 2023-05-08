#include <iostream>
using namespace std;
class A
{
    public:
    A(){};
    ~A(){};
    void showMe(){
        cout << "A" << endl;
    }
};
class B : public A
{
    public:
    B(){};
    ~B(){};
    void showMe(){
        cout << "B" << endl;
    }
};
int main(int argc, char const *argv[]){
    A *p = new B;
    p->showMe();
    return 0;
}
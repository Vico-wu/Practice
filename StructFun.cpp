#include <iostream>
using namespace std;
class Person
{
private:
    /* data */
public:
    Person(/* args */);
    ~Person();
};

Person::Person(/* args */)
{
    cout<<"Person 构造函数的调用" <<endl;
}

Person::~Person()
{
    cout<< "这是Person的析构函数调用" <<endl;
}
class Classroom
{
private:
    /* data */
public:
    Classroom(/* args */);
    ~Classroom();
};

Classroom::Classroom(/* args */)
{
    cout<<"这是教室的构造函数调用"<<endl;
}

Classroom::~Classroom()
{
    cout<<"这是教室的析构函数调用"<<endl;
}

int main(void){
    Person Wu;
    cout << "实例了一个Person"<<endl;
    Classroom Cls;
    cout<<"实例了一个教室"<<endl;
}
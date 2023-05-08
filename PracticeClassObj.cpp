#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle{
    public:
    //属性
    int m_r;
    //行为
    //获取圆的周长
    double calculate(){
        return 2* PI *m_r;
    }
};

class Student{
public:
string Name;
int number;
void printInfo(){
    cout<<"姓名："<<Name<<endl;
    cout<<"学号: "<<number<<endl;
}
};
int main(){
    //通过圆类 创建具体对象
    Circle cl ;
    cl.m_r = 10;
    cout<< "圆的周长为：" << cl.calculate() <<endl;
    Student stu;
    stu.Name = "Archi";
    stu.number = 7654321;
    stu.printInfo();
}
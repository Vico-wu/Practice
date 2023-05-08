#include <iostream>
using namespace std;
class CirclePoint
{
private:
    /* data */
    int pointX;
    int pointY;
    int CircleX;
    int CircleY;
    int CircleR;
public:
    void setCircle(int x,int y ,int r)
    {
        CircleX = x;
        CircleY = y;
        CircleR = r;
    }
    void setPoint(int x, int y)
    {
        pointX =x;
        pointY = y;
    }
    void getPosn()
    {
        int distance = (pointX-CircleX)*(pointX-CircleX) + (pointY-CircleY)*(pointY-CircleY);
        if (distance ==  CircleR*CircleR){
            cout<<"点在圆上" << endl;
        }else if (distance== 0)
        {
            cout<<"点在圆心"<<endl;
        }else if (distance > CircleR*CircleR){
            cout<<"点在圆外"<<endl;
        }else{
           cout<<"点在圆内"<<endl; 
        }
        
    }
};

int main(){
    CirclePoint CP;
    CP.setCircle(10,20,10);
    CP.setPoint(5,10);
    CP.getPosn();
}

#include <iostream>
//#include <string>
using namespace std;

class Cube
{
private:
    /* data */
    int m_H;
    int m_L;
    int m_W;
public:
    int CalcS(){
        return m_H*m_L*2 + m_H*m_W*2 + m_L*m_W*2;
    }
    int CalcV(){
        return m_H*m_L*m_W;
    }
    void setH(int H){
        m_H = H;
    }
    void setL(int L){
        m_L = L;
    }
    void setW(int W){
        m_W = W;
    }
    void setAll(int H,int L,int W){
        m_H = H;
        m_L = L;
        m_W = W;
    }
};
int main(){
    Cube cube;
    cube.setAll(10,20,30);
    cout << "体积是 :" << cube.CalcV() << endl;
    cout << "面积是 :" << cube.CalcS() << endl;

}


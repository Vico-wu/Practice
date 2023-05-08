#include <cstdio>
#include <cstdint>
#include <cstdlib>

class ISpeak{
    protected:
    size_t b;
    public:
    ISpeak(size_t _v)
    :b(_v)
    {}
    virtual void speak() = 0;
};
class Dog : public ISpeak
{
private:
    /* data */
public:
    Dog()
    : ISpeak(0)
    {}
    virtual void speak() override{
        printf("woof! %llu\n",b);
    }
};

class Human : public ISpeak
{
private:
    size_t c;/* data */
public:
    Human()
    : ISpeak(1)
    , c(2)
    {}
    virtual void speak() override{
        printf("hello! %llu\n",c);
    }
};


int main(int argc,char** _argv){
    Human* pHuman = new Human();
    Dog* pDog = new Dog();

    ISpeak* speak1 = (ISpeak*)pHuman;
    ISpeak* speak2 = (ISpeak*)pDog;

    speak2->speak();
    speak1->speak();
    return 0;
}
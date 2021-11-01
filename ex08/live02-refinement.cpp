#include <iostream>

using namespace std;

class Father
{
public:
    void staticMethod(void) { cout << "Calling Father::staticMethod" << endl; };
    void dynMethod(void) { cout << "Calling Father::dynMethod" << endl; };
};

class Son : public Father
{
public:
    void staticMethod(void) { cout << "Calling Son::staticMethod" << endl; };
    void dynMethod(void) { cout << "Calling Son::dynMethod" << endl; };
};

int main(void)
{
    Son *s = new Son();
    Father *p = s;

    cout << "Static dispatch: " << endl;
    s->staticMethod();
    p->staticMethod();

    cout << "Dybamic dispatch: " << endl;
    s->dynMethod();
    p->dynMethod();

    delete s;

    return 0;
}

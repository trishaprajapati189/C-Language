#include<iostream>
using namespace std;

class Math
{
    private :
    int a,b;
    public :
    void input(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void output()
    {
        cout << "a + b= " << a+b << endl;
    }

    Math operator+ (Math m1)
    {
        Math temp;
        temp.a = this->a + m1.a;
        temp.b = this->b + m1.b;
        return temp;
    }
};

int main()
{
    Math m1,m2,m3;
    m1.input(10,20);
    m2.input(20,30);
    m3 = m1 + m2;
    m3.output();

    return 0;
}
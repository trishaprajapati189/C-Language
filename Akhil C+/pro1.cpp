#include<iostream>
using namespace std;
// OOP
// reuseable, structured
// class : collection of data and methods.
// data encaptulation : 
// used to organize data in class.
// in two different unit.
// 1. data : attributes, int a, int b
// 2. methods : process - sum

// data in private
// methods in public

// user cant access directly

// input/output : 
// input : setter


// by default private : 
class Student
{
    // data
    // global variable
    private :
    float pi = 3.14;
    int a,b;
    // methods : setter
    public :
    void input()
    {
        cout << "Enter the value of a and b : ";
        cin >> a >> b;
    }
    void sum()
    {
        cout << "Sum is : " <<  a+b << endl << endl;
    }
};

// class -> object

int main()
{

    int n;
    cout << "Enter size of object : ";
    cin >> n;
    Student s1[n]; 
    
    for(int i=0; i<n; i++)
    {
        s1[i].input();
        s1[i].sum();
    }

    s1[3].sum();



}
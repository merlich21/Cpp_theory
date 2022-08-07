// C++ program to demonstrate function overriding

#include <iostream>
using namespace std;

class Base {
   public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
        Base::print();
    }
};

// Call overriden function using the scope resolution operator ::

// int main() {
//     Derived derived1, derived2;
//     derived1.print();

//     // access print() function of the Base class
//     derived2.Base::print();

//     return 0;
// }


// Call overriden function using pointer

int main(void)
{
    Derived derived1;
    // pointer of Base type that points to derived1
    Base    *ptr = &derived1;

    // call function of Base class using ptr
    ptr->print();
    return 0;
}

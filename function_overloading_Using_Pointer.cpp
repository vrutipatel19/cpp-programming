//C++ Call Overridden Function Using Pointer (using type casting)

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
    }
};

int main() {
    Derived derived1;
     Base b1;
    // pointer of Base type that points to derived1
    Base* ptr = &derived1;

    // call function of Base class using ptr
    ((Derived*)ptr)->print();
    
	ptr=&b1;
	ptr->print();
    return 0;
}

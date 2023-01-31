//C++ Access Overridden Function to the Base Class


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
    derived1.print();

    // access print() function of the Base class
    derived1.Base::print();

    return 0;
}

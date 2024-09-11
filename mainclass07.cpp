//Refer to a member of the base class in the derived object: In the case of having the same method in both the base and derived classes, we could refer to each by the scope resolution operator as below.

// Refer to a member of the base class in the derived object.
#include <iostream>

class Base {
public:
    void func()
    {
        std::cout << "This is Base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void func()
    {
        std::cout << "This is Derived class" << std::endl;
    }
};

int main()
{
    Derived obj;
    obj.Base::func();
    obj.func();
    return 0;
}

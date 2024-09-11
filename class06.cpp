//Interesting Fact (Rare Known Concept)
//Why do we give semicolons at the end of class?

#include <iostream>
using namespace std;

class Demo{
   int a, b;
    public:
    Demo()   // default constructor
    {
        cout << "Default Constructor" << endl;
    }
    Demo(int a, int b):a(a),b(b)  //parameterised constructor
    {
        cout << "parameterized constructor -values" << a  << " "<< b << endl;
    }

}instance;


int main() {

    return 0;
}

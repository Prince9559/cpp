#include <iostream>
//#include<string.h>
//using namespace std;

class Demo {
public:
    int publicVar;

private:
    int privateVar;

    protected:
    int protectedVar;

public:
    void setValues(int pub, int priv, int prot) {
        publicVar = pub;
        privateVar = priv;
        protectedVar = prot;
    }

    void display() {
        std::cout << "Public: " << publicVar;
        std::cout << "\nPrivate: " << privateVar;
        std::cout << "\nProtected: " << protectedVar;
    }
};

int main() 
{
    Demo obj;
//    obj.publicVar = 19;  
    obj.setValues(10, 20, 30);
    obj.display();
    return 0;
} 

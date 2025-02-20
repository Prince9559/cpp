#include <iostream>
using namespace std;

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
        cout << "Public: " << publicVar;
        cout << "Private: " << privateVar;
        cout << "Protected: " << protectedVar;
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

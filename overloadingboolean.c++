 #include <iostream>
using namespace std;

class Number 
{
    int value;
    public:Number(int v) : value(v) {}
    
    
    bool operator>(const Number& va) 
    {
        return value > va.value;
    }
};

int main() {
    Number n1(100), n2(50);
    if (n1 > n2)
        cout << "\nn1 is greater than n2" << endl;
    else
        cout << "\nn1 is not greater than n2" << endl;
    return 0;
}


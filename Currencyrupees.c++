#include <iostream>
using namespace std;

class Currency 
{
    int total;
public:Currency(int r = 0, int p = 0)  
{
    total=r*100+p;
    
}
    friend ostream& operator<<(ostream& out, Currency& c) 
    {
     int r=c.total/100;
     int p=c.total % 100;
     
    out << "(" << r << ", " << p << ")";
    return out;
    }
    friend istream& operator>>(istream& in, Currency& c) 
    {
    
	    int r,p;
        in >> r >> p;
        c.total=r*100+p;
        return in;
        
    }
};

int main() 
{
    Currency c;
    
    cout << "Enter the Rupees and Paisa: ";
    cin >> c;
    cout << "You entered: " << c << endl;
    return 0;
}
     

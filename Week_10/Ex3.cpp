#include <iostream>
#include <string>
using namespace std;

class AdHocSquare
{
    private:
        double side;
    public:
        AdHocSquare(double side);
        void set_side(double side);
        void print(double area);
    
};

void AdHocSquare::set_side(double side)
{
    double area;
    
    if (side < 0)
    {
        side = side;
        area = 0;
    }
    else
    {
        side = side;
        area = side * side;
    }
    
    print(area);
}

AdHocSquare::AdHocSquare(double side)
{
    set_side(side);
}

void AdHocSquare::print(double area)
{
    cout << "Square: side=" << side << " area=" << area << endl;
}

int main()
{
    AdHocSquare s(4);
    s.set_side(2.0);
    s.set_side(-33.0);
    return 0;
}
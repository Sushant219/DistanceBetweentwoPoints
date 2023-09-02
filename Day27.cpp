#include <iostream>
#include <cmath>
using namespace std;
class Point
{

    int x1, y1;
    friend void distance(Point o1, Point o2);

public:
    Point(int a, int b)
    {
        x1 = a;
        y1 = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x1 << ", " << y1 << ")" << endl;
    }
    
};
void distance(Point o1, Point o2)
{
    double ans = sqrt(pow(o1.x1 - o2.x1, 2) + pow(o1.y1 - o2.y1, 2));
    cout << "The Distance Of Two Point Is : " << ans << endl;
}

int main()
{
    
    Point a(0,1);
    a.displayPoint();

    Point b(0,6);
    b.displayPoint();
    distance(a,b);
    
    return 0;
}
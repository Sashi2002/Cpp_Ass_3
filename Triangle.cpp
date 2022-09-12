#include <iostream>
using namespace std;
class Triangle
{
    public:
    void area()
    {
        double ar=(0.5)*4*3;
        cout<<"Area = "<<ar<<endl;
    }
    void perimeter()
    {
        int peri=3+4+5;
        cout<<"Perimeter = "<<peri<<endl;
    }
};
int main()
{  
    Triangle a;
    a.area();
    a.perimeter();
    return 0;
}
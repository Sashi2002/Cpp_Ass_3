#include <iostream>
using namespace std;
class Circle
{
    public:
    int r;
    void getradius()
    {
        cin>>r;
    }
    void perimeter()
    {
        double perimeter =2*3.14*r;
        cout<<"Perimeter = "<<perimeter<<endl;
    }
    void area()
    {
        double area=3.14*r*r;
        cout<<"Area = "<<area<<endl;
    }
};
int main()
{
    Circle r;
    r.getradius();
    r.perimeter();
    r.area();
    return 0;
}
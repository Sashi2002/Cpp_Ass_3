#include <iostream>
using namespace std;
class Room
{
    public:
    int length,breadth,height;
    void getinfo()
    {
        cout<<"Length = ";
        cin>>length;
        cout<<"Breath = ";
        cin>>breadth;
        cout<<"Height = ";
        cin>>height;
    }
    void area()
    {
        int arr=length*breadth;
        cout<<"Area = "<<arr<<endl;
    }
    void volume()
    {
        double vol=length*breadth*height;
        cout<<"Volume = "<<vol<<endl;
    }
};
int main()
{
    Room r1,r2;
    cout<<"Write dimension of Room1"<<endl;
    r1.getinfo();
    cout<<"Room1"<<endl;
    r1.area();
    r1.volume();
    cout<<"Write dimension of Room2"<<endl;
    r2.getinfo();
    cout<<"Room2"<<endl;
    r2.area();
    r2.volume();

    return 0;
}
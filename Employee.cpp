#include <iostream>
using namespace std;
class Employee
{
    public:
    string name;
    int year;
    string address;
    Employee(string s,int y,string k)
    {
        name=s;
        year=y;
        address=k;
    }
    void printInfo()
    {
        cout<<name<<"   "<<year<<"   "<<address<<endl;
    }
};
int main()
{
    Employee e1("Robert  " ,1994, "       64C-WallsStreat");
    Employee e2("Sam    " ,2000, "        68D-WallsStreat");
    Employee e3("John   " ,1999, "       26B-WallsStreat");
    cout<<"Name     Year of Joining       Address "<<endl;
    e1.printInfo();
    e2.printInfo();
    e3.printInfo();
    return 0;
}
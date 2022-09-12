#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
class String
{
    public:
    string str;
    void get_Str()
    {
        cout<<"Enter a string"<<endl;
        cin>>str;
    }
    void print_Str()
    {
        cout<<"String is "<<str<<endl;
        transform(str.begin(), str.end(),str.begin(), ::toupper);
        cout<<"Upper Case = "<<str<<endl;
        transform(str.begin(), str.end(),str.begin(), ::tolower);
        cout<<"Lower Case = "<<str<<endl;
    }
};
int main()
{
    String s1;
    s1.get_Str();
    s1.print_Str();
    return 0;
}
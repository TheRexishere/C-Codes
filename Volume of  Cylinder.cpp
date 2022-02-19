#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    float a,b,c;
    cout<<"Height:";
    cin>>a;
    cout<<"Radius:";
    cin>>b;
    c=(22*b*b*a)/7;
    cout<<"Volume of Cylinder: "<<c;
    return 0;
}

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    float a,b,c,d;
    cout<<"Length:";
    cin>>a;
    cout<<"Width:";
    cin>>b;
    c=a*b;
    d=2*(a+b);
    cout<<"Area of rectangle:"<<c<<endl;
    cout<<"Perimeter of rectangle:"<<d;
    return 0;
}

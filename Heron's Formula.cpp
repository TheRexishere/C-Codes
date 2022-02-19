#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    float a,b,c,s,A;
    cout<<"Side Length 1:";
    cin>>a;
    cout<<"Side Length 2:";
    cin>>b;
    cout<<"Side Length 3:";
    cin>>c;
    s=(a+b+c)/2;
    s=s*(s-a)*(s-b)*(s-c);
    A=sqrt(s);
    cout<<"Area of Triangle:"<<A<<endl;
    return 0;
}

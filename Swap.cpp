#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"Numbers "<<a<<" & "<<b<<" is ";
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" & "<<b;
    return 0;
}

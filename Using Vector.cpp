#include<iostream>
#include<vector>
using std::cout;
using std::vector;
using std::cin;
using std::endl;

int main()
{
    vector<int> a;
    int b;
    for(int i=0;i<5;i++)
    {
        cin>>b;
        a.push_back(b);
    }
    cout<<endl<<a.at(0)<<endl;
    cout<<a.at(1)<<endl;
    cout<<a.at(2)<<endl;
    cout<<a.at(3)<<endl;
    cout<<a.at(4)<<endl;
    return 0;

}

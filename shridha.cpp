#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    float r;
    cout<<"enter three nos:";
    cin>>a>>b>>c;
    r =(-b+sqrt(b*b-4*a*c))/2*a;
    cout<<r;
    return 0;
}
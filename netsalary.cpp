#include<iostream>
using namespace std;
int main()
{
    float  basic;
    float percentAllow;
    float percentDeduct;
    float netSalary;
    cout<<"Enter a basic salary";
    cin>>basic;
    cout<<"enter percent of alllowance:";
    cin>>percentAllow;
    cout<<"enter percent of deduct";
    cin>>percentDeduct;
    netSalary=basic+basic*percentAllow/100-basic*percentDeduct/100;
    cout<<"Netsalary is:"<<netSalary<<endl;

     
}
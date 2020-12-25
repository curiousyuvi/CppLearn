#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    cout<<"0";
    else if(n==2)
    cout<<"0 1 ";
    
    else
    {
    int a=0,b=1,c;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++)
    {
     c=a+b;
     cout<<c<<" ";
     a=b;
     b=c;
     
    }
    }
    return 0;
}
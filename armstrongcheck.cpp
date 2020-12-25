#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,c,sum=0;
    cin>>n;
    c=n;
    while(c!=0)
    {
      sum=sum+(c%10)*(c%10)*(c%10);
      c=c/10;

    }
    if(sum==n)
    cout<<"Armstrong confirmed";
    else
    cout<<"Not armstrong";
    return 0;
    }
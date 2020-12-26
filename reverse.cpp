#include<iostream>
using namespace std;
int main()
{
    int n,c,rev=0;
    cin>>n;
    c=n;
    while(c!=0)
    {
     rev=(rev*10)+(c%10);
     c=c/10;

    }
    cout<<rev;
    return 0;
}
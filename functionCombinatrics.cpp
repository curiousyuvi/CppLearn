#include<iostream>
using namespace std;
int fact(int k)
{
    int f=1;
    for(int i=1;i<=k;i++)
    {
     f=f*i;
    }
    return f;
}
double comb(int n,int r)
{
    double c=fact(n)/(fact(r)*fact(n-r));
    return c;
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<comb(n,r)<<endl;
    return 0;
}
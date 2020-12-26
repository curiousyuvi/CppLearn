#include<iostream>
using namespace std;
int fact(int k)
{
    int f=1;
    for(int a=1;a<=k;a++)
    {
     f=f*a;
    }
    return f;
}
int comb(int n,int r)
{
    int c=fact(n)/(fact(r)*fact(n-r));
    return c;
}
int main()
{
    int m;
    cin>>m; 
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<(i+1);j++)
        {
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
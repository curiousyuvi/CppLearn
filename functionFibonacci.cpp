#include<iostream>
using namespace std;
void fib(int m)
{
   
    if(m==1)
    cout<<"0 "<<endl;
    else if(m==2)
    cout<<"0 1 "<<endl;
    else
    {
       int a=0,b=1,c;
       cout<<a<<" "<<b<<" ";
       for(int i=1;i<=(m-2);i++)
       {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
       }
       return;
    }
    
}
int main()
{
    int n;
    cin>>n;
    fib(n);
    return 0;
}
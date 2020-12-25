#include<iostream>
using namespace std;
int main()
{
    int i,x,row,column;
    cout<<"Enter no. of rows:"<<endl;
    cin>>row;
    cout<<"Enter no. of columns:"<<endl;
    cin>>column;
    for(i=1;i<=row;i++)
    {
       for(x=1;x<=column;x++)
       {
           if(i==1 || i==row)
           cout<<"*";
           else if(x==1 || x==column)
           cout<<"*";
           else
           cout<<" ";
       } 
       cout<<endl;  
    }
    return 0;
}
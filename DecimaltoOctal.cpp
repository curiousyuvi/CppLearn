#include<iostream>
using namespace std;
int main()
{
     long dec,c,octr=0,oct=0;
     cin>>dec;
     c=dec;
     while(c!=0)
     {
       octr=octr*10+(c%8); 
       c=c/8;
     }
     while(octr!=0)
     {
       oct=oct*10+(octr%10); 
       octr=octr/10;
     } 
     cout<<oct;
     return 0;
}
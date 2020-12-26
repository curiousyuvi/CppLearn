#include<iostream>
using namespace std;
int main()
{
     long dec,c,hexr=0,hex=0;
     cin>>dec;
     c=dec;
     while(c!=0)
     {
       hexr=hexr*10+(c%16); 
       c=c/16;
     }
     while(hexr!=0)
     {
       hex=hex*10+(hexr%10); 
       hexr=hexr/10;
     } 
     cout<<hex;
     return 0;
}
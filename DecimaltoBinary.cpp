#include<iostream>
using namespace std;
int main()
{
     long dec,c,binr=0,bin=0;
     cin>>dec;
     c=dec;
     while(c!=0)
     {
       binr=binr*10+(c%2); 
       c=c/2;
     }
     while(binr!=0)
     {
       bin=bin*10+(binr%10); 
       binr=binr/10;
     } 
     cout<<bin;
     return 0;
}
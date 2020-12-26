#include<iostream>
#include<cmath>
using namespace std;
long bin2dec(long bi)
{
    long dec=0;  
    int i=0;
    while(bi!=0)
    {
        dec=dec+(bi%10)*pow(2,i);
        i++;
        bi=bi/10;
    }
    return dec;
}
long bin2oct(long b)
{
  long d=bin2dec(b);
   long octr=0,oct=0;
     while(d!=0)
     {
       octr=octr*10+(d%8); 
       d=d/8;
     }
     while(octr!=0)
     {
       oct=oct*10+(octr%10); 
       octr=octr/10;
     } 
     return oct;
}
int main()
{
    long bin;
    cin>>bin;
    cout<<bin2oct(bin);
    return 0;
}
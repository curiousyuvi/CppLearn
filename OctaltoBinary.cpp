#include<iostream>
#include<cmath>
using namespace std;
long oct2dec(long oc)
{
    long dec=0;
    int i=0;
    while(oc!=0)
    {
        dec=dec+(oc%10)*pow(8,i);
        i++;
        oc=oc/10;
    }
    return dec;
}
long oct2bin(long o)
{
    long d=oct2dec(o);
    long binr=0,bin=0;
     
     
     while(d!=0)
     {
       binr=binr*10+(d%2); 
       d=d/2;
     }
     while(binr!=0)
     {
       bin=bin*10+(binr%10); 
       binr=binr/10;
     } 
     return bin;

}
int main()
{
    long oct;
    cin>>oct;
    cout<<oct2bin(oct);
    return 0;


}

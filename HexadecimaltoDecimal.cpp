#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long hex,dec=0;
    cin>>hex;
   
    int i=0;
    while(hex!=0)
    {
        dec=dec+(hex%10)*pow(16,i);
        i++;
        hex=hex/10;
    }
    cout<<dec;
    return 0;
}
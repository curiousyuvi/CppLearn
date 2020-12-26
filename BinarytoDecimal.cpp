#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long bin,dec=0;
    cin>>bin;
   
    int i=0;
    while(bin!=0)
    {
        dec=dec+(bin%10)*pow(2,i);
        i++;
        bin=bin/10;
    }
    cout<<dec;
    return 0;
}
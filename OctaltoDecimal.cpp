#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long oct,dec=0;
    cin>>oct;
   
    int i=0;
    while(oct!=0)
    {
        dec=dec+(oct%10)*pow(8,i);
        i++;
        oct=oct/10;
    }
    cout<<dec;
    return 0;
}
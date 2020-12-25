#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 1st No.:\n";
    cin>>a;
    cout<<"Enter 2nd No.:\n";
    cin>>b;
    cout<<"Enter 3rd No.:\n";
    cin>>c;
    int big=(a>b)?((a>c)?a:c):((b>c)?b:c);
    cout<<"maximum of three no.s is "<<big<<endl;
    
    }
    return 0;

}
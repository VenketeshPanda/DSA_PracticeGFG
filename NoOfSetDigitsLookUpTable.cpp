#include<iostream>
using namespace std;

int table[256];
void initialize()
{
    table[0]=0;
    for(int i=1;i<256;i++)
        table[i]=(i & 1) + table[i/2];
}

int countD(int n)
{
    /*
    return table[n&0xff]+
    table[(n>>8)& 0xff]+
    table[(n>>16)& 0xff]+
    table[(n>>24)]; */

    int r= table[n & 0xff];
    n=n>>8;

    r=r+table[n & 0xff];
    n=n>>8;

    r=r+table[n & 0xff];
    n=n>>8;

    r=r+table[n & 0xff];
    n=n>>8;

    r=r+table[n & 0xff];
    return r;




}

int main()
{
    initialize();
    int n;
    cin>>n;
    cout<<countD(n);
}
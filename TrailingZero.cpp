#include<iostream>
using namespace std;

int tz(int n)
{
    int r=0;
    for(int i=5;i<=n;i=i*5)
    {
        r=r+(n/i);
    }
    return r;
}

int main()
{
    int n;
    cin>>n;
    cout<<tz(n);
}
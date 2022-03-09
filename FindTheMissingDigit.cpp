#include<iostream>
using namespace std;

int missing(int a[],int n)
{
    int r=0,r1=0;
    for(int i=0;i<n;i++)
        r=r^a[i];

    for(int i=1;i<=n+1;i++)
        r1=r1^i;
    return (r^r1);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<missing(a,n);
}
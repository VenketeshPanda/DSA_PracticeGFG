#include<iostream>
using namespace std;

int pow(int x,int n)
{
    int r=1;
    while(n>0)
    {
        if(n%2!=0)
            r=r*x;
        x=x*x;
        n=n/2;
    }
    return r;
}

int main()
{
    int x,n;
    cin>>x>>n;
    cout<<pow(x,n);

    return 0;
}

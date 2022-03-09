#include<iostream>
using namespace std;

int dig(int n)
{
    int c;
    while(n>0)
    {
        if(n%2!=0)
            c++;
        n=n/2;
    }
    return c;
}


int main()
{
    int n;
    cin>>n;
    cout<<dig(n);
}
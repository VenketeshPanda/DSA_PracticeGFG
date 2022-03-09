#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<dig(n);
}

int dig(int n)
{
    return floor(log10(n) + 1);
}
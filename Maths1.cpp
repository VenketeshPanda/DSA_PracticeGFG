#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;


//No of digits of a number using logarthmic solution.
/*
int dig(int n)
{
    return floor(log10(n) + 1);
}

int main()
{
    int n;
    cin>>n;
    cout<<dig(n);
}
*/


//Palindrome Number

/*
bool pal(int n)
{
    int n1=n,d,r=0;
    while(n1!=0)
    {
        d=n1%10;
        r=(r*10)+d;
        n1=n1/10;
    }
    return(r==n);
}

int main()
{
    int n;
    cin>>n;
    cout<<pal(n);
}
*/

//Factorial of a number

int fact(int n)
{
    if(n==0 || n==1)
        return n;
    return n * fact(n-1);
}


int main()
{
    int n;
    cin>>n;
    cout<<fact(n);;
}

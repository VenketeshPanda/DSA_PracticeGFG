#include<iostream>
#include<math.h>
using namespace std;

void powset(string s)
{
    int n=s.length();
    int psize=pow(2,n);
    for(int c=0;c<psize;c++)
    {
        for(int i=0;i<n;i++)
        {
            if((c&(1<<i)) !=0)
                cout<<s[i];
        }
        cout<<endl;
    }
}


int main()
{
    string s;
    cin>>s;
    powset(s);
}
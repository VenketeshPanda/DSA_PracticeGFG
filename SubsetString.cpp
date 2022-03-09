#include<iostream>
using namespace std;

void subset(string s,string c,int i)
{
    if(i==s.length())
    {
        cout<<c<<" ";
        return;
    }
    subset(s,c,i+1);
    subset(s,c+s[i],i+1);
}
int main()
{
    string s;
    cin>>s;
    subset(s,"",0);
}

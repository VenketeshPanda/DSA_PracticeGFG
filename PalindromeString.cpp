#include<iostream>
using namespace std;

bool pal(string s, int start, int end)
{
    if(start>=end) return true;

    return (s[start]==s[end]) && pal(s,start+1,end-1);
}

int main()
{
    string s,s1;
    cin>>s;
    int start, end;
    start=0;
    end=s.size()-1;
    cout<<pal(s,start,end);    
}
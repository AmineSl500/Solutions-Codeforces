#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        map<char,int>m;
        m['S'] = 0;
        m['M'] = 1;
        m['L'] = 2;
        if(m[a[a.length()-1]] > m[b[b.length()-1]])
        {
            cout<<">"<<endl;
        }
        else if(m[a[a.length()-1]] < m[b[b.length()-1]])
        {
            cout<<"<"<<endl;
        }
        else{
            if(a[a.length()-1] == 'S')
            {
            if(a.length() > b.length())
            {
                cout<<"<"<<endl;
            }
            else if(a.length() < b.length())
            {
                cout<<">"<<endl;
            }
            else
            {
                cout<<"="<<endl;
            }
            }
            else if(a[a.length()-1] == 'L')
            {
            if(a.length() > b.length())
            {
                cout<<">"<<endl;
            }
            else if(a.length() < b.length())
            {
                cout<<"<"<<endl;
            }
            else
            {
                cout<<"="<<endl;
            }
            }
            else{
                cout<<"="<<endl;
            }
        }
    }
    return 0;
}

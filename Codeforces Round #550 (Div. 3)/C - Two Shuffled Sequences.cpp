#include <bits/stdc++.h>
#include <string>
using namespace std;

int  main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    int n;
    cin>>n;
    int A[n];
    int B[n];
    int first = 0;
    int second = 0;
    map<int,int>done;
    for(int i = 0;i < n;i++)
    {
        int k;
        cin>>k;
        done[k]++;
        if(done[k] == 1)
        {
            A[first] = k;
            first++;
        }
        else if(done[k] == 2)
        {
            B[second] = k;
            second++;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    sort(A,A+first);
    sort(B,B+second,greater<int>());
    cout<<"YES"<<endl;
    cout<<first<<endl;
    for(int i = 0;i < first;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    cout<<second<<endl;
    for(int i = 0;i < second;i++)
    {
        cout<<B[i]<<" ";
    }
    return 0;

}

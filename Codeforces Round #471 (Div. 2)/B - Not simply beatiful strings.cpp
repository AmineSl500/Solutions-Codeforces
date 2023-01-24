#include <bits/stdc++.h>

using namespace std;

int main() {
string s;
cin>>s;
int A[26] = {0};
for(unsigned int lol = 0;lol< s.length();lol++)
{
A[int(s[lol] - 'a')]++; 
}
int sum = 0;
for(int i = 0;i < 26;i++)
{
if(A[i] != 0)
{
sum++;
}

}
if(sum > 4||sum == 1)
{
cout<<"No";
return 0;
}
else{
if(sum == 2)
{
int B[2];
int j= 0 ;
for(int i = 0;i < 26;i++)
{
if(A[i] != 0)
{
B[j] = A[i];
j++;
}
}
if(B[0]== 1||B[1] == 1)
{
cout<<"No";
return 0;
}
else{
cout<<"Yes";
return 0;
}
}
else if(sum == 3){
int B[3];
int j= 0 ;
for(int i = 0;i < 26;i++)
{
if(A[i] != 0)
{
B[j] = A[i];
j++;
}
}
if((B[0] == 1&&B[1] == 1&&B[2] ==1)||(B[2] == 1&&B[1] == 1&&B[0] ==1)||(B[2] == 1&&B[0] == 1&&B[1] ==1))
{
cout<<"No";
}
else{
cout<<"Yes";
}
}
else{
cout<<"Yes";
}
}
   return 0;
}
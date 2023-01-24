#include <bits/stdc++.h>

using namespace std;

int main() {
float hh,mm;
int H,D,N;
float C;
cin>>hh>>mm>>H>>D>>C>>N;
float sumone = 0;
if(hh >= 20)
{
float newcost = C *80 / 100;
if(H % N == 0)
{
sumone = (H / N) * newcost;

}
else{
sumone = ((H / N) + 1) * newcost;
}
printf("%f",sumone);
}
else{
if(H % N == 0)
{
sumone = (H / N) * (C );

}
else{
sumone = ((H / N) + 1) * (C );
}
int zeyed;
float sumtwo;
float newcost = C *80 / 100;
if(mm== 0)
{
zeyed = (20 - hh) * 60;
}
else{
zeyed = (20 - hh) * 60 -  mm;
}
int newhunger = H + zeyed * D;
//cout<<zeyed<<endl;
if(newhunger % N == 0)
{
sumtwo = (newhunger / N) * newcost;
}
else{
sumtwo = ((newhunger / N) +1) * newcost;
//cout<<newhunger<<endl;
}
if(sumtwo < sumone)
{
printf("%f",sumtwo);
}
else{
printf("%f",sumone);
}
}

   return 0;
}
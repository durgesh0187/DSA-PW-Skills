#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    int pow=1;
    while(n>0)
    {
        int lst = n%10;
        ans += lst*pow;
        pow *= 2;
        n /= 10;
    }
    
    int n2;
    cin>>n2;
    int ans2=0;
    int pow2=1;
    while(n2>0)
    {
        int lst = n2%10;
        ans2 += lst*pow2;
        pow2 *= 2;
        n2 /= 10;
    }
   
    if(ans>ans2)
    {
        cout<<ans;
    }
    else
    {
        cout<<ans2;
    }
}
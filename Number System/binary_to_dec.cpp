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

    cout<<ans;
}
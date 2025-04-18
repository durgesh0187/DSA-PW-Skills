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
        int lst = n%2;
        ans += lst*pow;
        pow *= 10;
        n /= 2;
    }

    cout<<ans;
}
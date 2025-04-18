#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sum=0;
    for(int i=1;i<=5;i++)
    {
        cin>>n;
        sum += n;
    }

    int ans=0;
    int pow=1;
    while(sum>0)
    {
        int lst = sum%2;
        ans += lst*pow;
        pow *= 10;
        sum = sum/2;
    }
    cout<<ans;
}
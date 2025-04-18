#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n>0)
    {
        int lst = n%2;
        if(lst==0)
        {
            ans++;
        }
        n /= 2;
    }

    cout<<ans;
}
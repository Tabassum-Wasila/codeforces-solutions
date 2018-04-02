#include<iostream>
using namespace std;
int main()
{
    int n, k;
    long long ans = 0;
    cin>>n>>k;
    for(int i = 2; i <= k * 2; i += 2)
    {
        if(n < i)
            break;
        ans += ( (n - i) * 2 + 1);
    }
    cout<<ans<<endl;
    return 0;
}

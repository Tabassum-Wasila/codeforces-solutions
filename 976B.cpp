#include<iostream>
using namespace std;
int main()
{
    long long n, m, k, x = 1, y = 1;
    cin>>n>>m>>k;
    if(k < n)
    {
        cout<<x + k<<" "<<1<<endl;
    }
    else if(k < (n + m - 1))
    {
        cout<<n<<" "<<y + k - (n - 1)<<endl;
    }
    else
    {
        k -= n + m - 1;
        x = (n - 1) - k/(m - 1);
        if(x % 2)
        {
            y = m - k%(m - 1);
        }
        else
        {
            y = 2 + k%(m - 1);
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}

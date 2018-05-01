#include<iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '1')
            count++;
    }
    if(count < 2)
        cout<<s<<endl;
    else
    {
        cout<<1;
        for(int i = 0; i < n - count; i++)
        {
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}

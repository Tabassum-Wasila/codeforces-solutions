#include<bits/stdc++.h>
using namespace std;

bool srt(pair<long long, long long>p1, pair<long long, long long>p2)
{
    if(p1.first == p2.first)
        return p1.second > p2.second;
    return p1.first < p2.first;
}

int main()
{
    int n;
    cin>>n;
    long long x, a[n + 100], b[n + 100];
    vector< pair<long long, long long> >v;
    for(int i = 1; i <= n; i++)
    {
        cin>>a[i]>>b[i];
        v.push_back(make_pair(a[i], b[i]));
    }
    sort(v.begin(), v.end(), srt);
    long long first1 = 0, second1 = 0, first2 = 0, second2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i].second > second1)
        {
            first1 = v[i].first;
            second1 = v[i].second;
        }
        else
        {
            first2 = v[i].first;
            second2 = v[i].second;
            break;
        }
    }
    if(first2 == 0 && second2 == 0)
        cout<<-1<<" "<<-1<<endl;
    else
    {
        int t;
        for(int i = 1; i <= n; i++)
        {
            if(first2 == a[i] && second2 == b[i])
            {
                cout<<i<<" ";
                t = i;
                break;
            }
        }
        for(int i = 1; i <= n; i++)
        {
            if(i != t && first1 == a[i] && second1 == b[i])
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}

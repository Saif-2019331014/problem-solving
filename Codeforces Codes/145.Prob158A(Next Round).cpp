#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-9
#define pb           push_back
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int n, k, cnt=0;
    cin>>n>>k;
    vi v(n);
    k--;

    for(int i=0; i<n; i++)
        cin>>v[i];

    for(int i=0; i<n; i++)
    {
        if(v[i]>0 && v[i]>=v[k])
            cnt++;
        else
            break;
    }

    cout<<cnt<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}

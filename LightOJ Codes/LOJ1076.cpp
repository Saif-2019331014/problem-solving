///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

///*//////////////////////////////////////////*///
/// "When you want something, all the universe ///
///  conspires in helping you to achieve it."  ///
///              - Paulo Coelho, The Alchemist ///
///*//////////////////////////////////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-9
#define gcd          __gcd
#define FT           first
#define SD           second
#define pb           push_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int,int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          (long long)1000000007
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    static int cs=0;
    int n, m, lo=0, hi=0, mid;
    cin>>n>>m;
    vi v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        lo = max(lo, v[i]);
        hi += v[i];
    }

    while(lo<=hi)
    {
        int k=0;
        mid = lo+((hi-lo)>>1);

        for(int i=0; i<n; )
        {
            int cur=0;

            while(i<n && cur+v[i]<=mid)
                cur += v[i++];

            k++;
        }

        if(k<=m)
            hi = mid-1;
        else
            lo = mid+1;
    }

    cout<<"Case "<<++cs<<": "<<lo<<endl;
}

int main()
{
    noice

    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///

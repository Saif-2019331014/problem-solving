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
#define EPS          1e-18
#define gcd          __gcd
#define FT           first
#define SD           second
#define pb           push_back
#define ppb          pop_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int n, l, r, s;
    cin>>n>>l>>r>>s;

    if((((r-l+1)*(r-l+2))>>1)>s)
    {
        cout<<-1<<endl;
        return;
    }

    set<int> st;
    vi v(n+2);

    for(int i=1; i<=n; i++)
        st.insert(i);

    for(int i=l; i<=r; i++)
    {
        int cur = s-(((r-i)*(r-i+1))>>1);
        v[i] = *(--st.upper_bound(cur));
        st.erase(v[i]);
        s -= v[i];
    }

    if(s)
    {
        cout<<-1<<endl;
        return;
    }

    for(int i=1; i<=n; i++)
    {
        if(!v[i])
        {
            v[i] = *st.begin();
            st.erase(v[i]);
        }
    }

    for(int i=1; i<=n; i++)
        cout<<v[i]<<" \n"[i==n];
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

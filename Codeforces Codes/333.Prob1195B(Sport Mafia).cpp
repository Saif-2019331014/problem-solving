///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*////////////////////*///
/// Author : SAIFULLAH29 ///
///*////////////////////*///

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
#define pb           push_back
#define mp           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define pii          pair<int,int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define mod          (long long)998244353
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    ll n, k, nn1, nn2, l, r, m, a, b, c, ans=29;
    cin>>n>>k;
    nn1 = (n*(n+1))/2;
    nn2 = ((n+1)*(n+2))/2;
    l = 1;
    r = n;

    if(k==nn1)
    {
        cout<<0<<endl;
        return;
    }

    while(l<=r)
    {
        m = l+((r-l)/2);
        a = (m*(m+1))/2;
        b = nn2-a;
        c = nn1-b;

        if(c==k)
        {
            ans = n-m+1;
            break;
        }
        else if(c<k)
            l = m+1;
        else
            r = m-1;
    }

    cout<<ans<<endl;
}

int main()
{
    noice

    int t=1;
    //cin>>t;

    while(t--)
        solve();

    return 0;
}

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///

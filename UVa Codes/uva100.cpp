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

ll lcm(ll a, ll b)
{
    return (a/gcd(a, b))*b;
}

void solve()
{
    ll a, b;

    while(cin>>a>>b)
    {
        ll mx = LLONG_MIN;
        bool fl=0;

        if(a > b)
        {
            swap(a, b);
            fl = 1;
        }

        for(ll i=a; i<=b; i++)
        {
            ll n=i, cnt=1;

            while(n != 1)
            {
                if(n&1)
                    n = (3*n)+1;
                else
                    n >>= 1;

                cnt++;
            }

            mx = max(cnt, mx);
        }

        if(fl)
            cout<<b<<SS<<a<<SS<<mx<<endl;
        else
            cout<<a<<SS<<b<<SS<<mx<<endl;
    }
}

int main()
{
    wow

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

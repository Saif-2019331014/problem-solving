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
    int n, m, x, y;
    cin>>n>>m>>x>>y;
    bool board[n+2][m+2];
    memset(board, false, sizeof(board));
    board[x][y] = board[1][y] = true;
    cout<<x<<SS<<y<<endl<<1<<SS<<y<<endl;


    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i&1)
            {
                if(!board[i][j])
                {
                    board[i][j] = true;
                    cout<<i<<SS<<j<<endl;
                }
            }
            else
            {
                if(!board[i][m-j+1])
                {
                    board[i][m-j+1] = true;
                    cout<<i<<SS<<m-j+1<<endl;
                }
            }
        }
    }
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

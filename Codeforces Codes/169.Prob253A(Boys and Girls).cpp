#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);

    int n, m;
    cin>>n>>m;

    if(n == m)
        for(int i=0; i<n; i++)
            cout<<"GB";
    else if(n > m)
    {
        for(int i=0; i<m; i++)
            cout<<"BG";

        n -= m;

        for(int i=0; i<n; i++)
            cout<<"B";
    }
    else
    {
        for(int i=0; i<n; i++)
            cout<<"GB";

        m -= n;

        for(int i=0; i<m; i++)
            cout<<"G";
    }

    cout<<endl;
	return 0;
}

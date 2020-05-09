#include <bits/stdc++.h>
using namespace std ;

int n , m ;
string s[55] ;
int dp[5][55] ;
int main()
{
    for( int i = 0 ; i < 51 ; i++ ) dp[0][i] = dp[1][i] = dp[2][i] = 100005 ;
    cin >> n >> m ;

    for( int i = 0 ; i < n ; i++ )
    {
        cin >> s[i] ;
        for( int j = 0 ; j < m ; j++ )
        {
            if( s[i][j] <= 'z' && s[i][j] >= 'a')
            {
                dp[0][i] = j ;
                break ;
            }
        }
        for( int j = 0 ; j < m ; j++ )
        {
            if( s[i][j] <= '9' && s[i][j] >= '0')
            {
                dp[1][i] = j ;
                break ;
            }
        }
        for( int j = 0 ; j < m ; j++ )
        {
            if( s[i][j] == '*' || s[i][j] == '#' || s[i][j] == '&')
            {
                dp[2][i] = j ;
                break ;
            }
        }
        for( int j = m-1 ; j > -1 ; j-- )
        {
            if( s[i][j] <= 'z' && s[i][j] >= 'a')
            {
                dp[0][i] = min ( dp[0][i] , m-j ) ;
                break ;
            }
        }
        for( int j = m-1 ; j > -1 ; j--)
        {
            if( s[i][j] <= '9' && s[i][j] >= '0')
            {
                dp[1][i] = min ( dp[1][i] , m-j ) ;
                break ;
            }
        }
        for( int j = m-1 ; j > -1 ; j-- )
        {
            if( s[i][j] == '*' || s[i][j] == '#' || s[i][j] == '&')
            {
                dp[2][i] = min ( dp[2][i] , m-j );
                break ;
            }
        }
    }

    int ans = 10000 ;

    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < n ; j++ )
        {
            if( j == i )continue ;
            for( int k = 0 ; k < n ; k++ )
            {
                if( k == j || k == i ) continue ;
                ans = min ( ans , dp[0][i] + dp[1][j] + dp[2][k] ) ;
            }
        }
    }
    cout << ans ;
    return 0 ;
}

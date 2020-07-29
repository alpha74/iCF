// Common Prefixes
// https://codeforces.com/contest/1384/problem/A
// Aman Kumar

/*
	INSIGHT:
		- See code
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

#define ff first
#define ss second
#define MOD 1000000007

void func() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		func() ;
	}
	
	return 0 ;
}


void func()
{
    int n;
    cin >> n;

    string s( 200, 'a' ) ;
    cout << s << "\n" ;

    for( int i = 0 ; i < n ; i++ )
    {
        int p ;
        cin >> p ;
        
        s[p] = ( s[p] == 'a' ? 'b' : 'a' ) ;
        cout << s << "\n" ;
    }
}

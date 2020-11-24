// Game 23
// https://codeforces.com/problemset/problem/1141/A
// Aman Kumar


/*
	INSIGHT:
		- Check first if m can be divided by n.
		- If yes, get div=m/n
		- Divide till it can, with 2
		- Divide till it can, with 3.
		- If div == 1, print ans
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ss second
#define ff first

void mandalore() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t = 1 ;
	//cin >> t ;
	
	while( t-- ) mandalore() ;
	
	return 0 ;
}

void mandalore()
{
	ll n, m ;
	cin >> n >> m ;
	
	ll ans = -1 ;
	
	if( n == m )
		ans = 0 ;
	else
	{
		if( m % n == 0 && m > n )
		{
			ll div = m / n ;
			ll count = 0 ;
			
			if( div % 2 == 0 || div % 3 == 0 )
			{
				while( div > 0 && div % 2 == 0 )
				{
					div = div / 2 ;
					count++ ;
				}
				
				while( div > 0 && div % 3 == 0 )
				{
					div = div / 3 ;
					count++ ;
				}
				
				if( div == 1 )
					ans = count ;
			}
		}
	}
	cout << ans << "\n" ;
}

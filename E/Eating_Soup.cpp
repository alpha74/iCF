// Eating Soup
// https://codeforces.com/problemset/problem/1163/A
// Aman Kumar


/*
	INSIGHT: 
		- See code
	
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
	int n, m ;
	cin >> n >> m ;
	
	int ans = -1 ;
	
	if( n == m )
		ans = 0 ;
	else if( m == 0 )
		ans = 1 ;
		
	else
	{
		int left = n - m ;
		
		ans = min( left, m ) ;
	}
	
	cout << ans << "\n" ;
}

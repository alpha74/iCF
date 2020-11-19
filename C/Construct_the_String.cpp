// Construct the String
// https://codeforces.com/problemset/problem/1335/B
// Aman Kumar


/*
	INSIGHT:
	 - Print b number of unique characters repeatedly till string length is achieved.
	
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

void func() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- ) func() ;
	
	return 0 ;
}

void func()
{
	int n, a, b ;
	cin >> n >> a >> b ;
	
	string ans = "" ;
	int pos = 0 ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		char app = 'a' + pos ;
		ans += app ;
		pos++ ;
		
		if( pos >= b )
			pos = 0 ;
	}
	cout << ans << "\n" ;
}

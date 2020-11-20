// Data Center
// https://codeforces.com/problemset/problem/1250/F
// Aman Kumar


/*
	INSIGHT:
	- Calculate min number of pens and pencils needed.
	- Check if their sum is <= k/
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

void func() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t = 1;
	//cin >> t ;
	
	while( t-- ) func() ;
	
	return 0 ;
}

void func()
{
	ll n ;
	cin >> n ;
	
	ll a = 1 ;
	ll ans = INT_MAX ;
	
	while( a <= (n/2) )
	{
		ll b = (n/a) ;
		
		if( a * b == n )
			ans = min( ans, 2*(a+b) ) ;
		
		a++ ;
	}
	if( n == 1 )
		cout << "4\n" ;
		
	else if( ans == INT_MAX )
		cout << "-1\n" ;
	else
		cout << ans << "\n" ;
}

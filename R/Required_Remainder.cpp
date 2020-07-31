// Required Remainder
// https://codeforces.com/contest/1374/problem/A
// Aman Kumar

/*
	INSIGHT: See code
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
	int x, y, n ;
	cin >> x >> y >> n ;
	
	int m = n - (n % x) + y ;
	
	if( m > n )
		m = n - (n % x) -(x-y) ;
	
	cout << m << "\n" ;
}

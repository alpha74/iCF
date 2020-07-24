// Water Buying
// https://codeforces.com/problemset/problem/1118/A
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
	ll n, a, b ;
	cin >> n >> a >> b ;
	
	// Combination of both
	ll mincost = (n/2) * min( 2*a, b) + ( n % 2 ) * a ;
	
	cout << mincost << "\n" ;
}

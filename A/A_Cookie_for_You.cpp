// A Cookie for You
// https://codeforces.com/contest/1371/problem/C
// Aman Kumar

/*
	INSIGHT: See code. Take care of all boundary cases.
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
	ll a, b, n, m ;
	cin >> a >> b >> n >> m ;
	
	bool possible = true ;
	
	// If sum of cookies is < total guests, return NO
	if( a+b < n+m )
		possible = false ;

	// If vanilla > choco AND choco < m, return NO
	else if( a > b && b < m )
		possible = false ;	

	// If vanilla < choco, AND vanilla < m, return NO
	else if( a <= b && a < m )
		possible = false ;

	
	// Print output
	if( possible )
		cout << "Yes\n" ;
	else
		cout << "No\n" ;
	
}

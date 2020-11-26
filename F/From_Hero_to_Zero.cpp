// From Hero to Zero
// https://codeforces.com/problemset/problem/1175/A
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
	cin >> t ;
	
	while( t-- ) mandalore() ;
	
	return 0 ;
}

void mandalore()
{
	ll n, k ;
	cin >> n >> k ;
	
	ll count = 0 ;
	
	while( n != 0 )
	{
		if( n % k == 0 )
		{
			count++ ;
			n = n / k ;
		}
		else
		{
			count += ( n % k ) ;
			n = n - ( n % k ) ;
		}
	}
	
	cout << count << "\n" ;
}

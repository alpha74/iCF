// C+=
// https://codeforces.com/problemset/problem/1368/A
// Author: Aman Kumar

// Always add the larger number to the smaller number

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
	
	while( t-- )
	{
		func() ;
	}
	
	return 0 ;
}


void func()
{
	ll a, b, n ;
	cin >> a >> b >> n ;

	ll count = 0 ;
	
	while( a <= n && b <= n )		
	{
		if( a < b )
			a += b ;
		else
			b += a ;
			
		count++ ;
	}
	cout << count << "\n" ;
}

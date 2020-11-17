// Copy-Paste
// https://codeforces.com/problemset/problem/1417/A
// Aman Kumar


/*
	INSIGHT:
	  - Find the smallest element.
    - Add number of times this element can be added to other elements.
	
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
	
	while( t-- )
	{
		func() ;
	}
	
	return 0 ;
}

void func()
{
	ll n, k ;
	cin >> n >> k ;
	
	vector<int> c(n) ;
	
	ll index = 0 ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> c[i] ;
		
		if( c[i] < c[index])
			index = i ;
	}
	
	ll spell = 0 ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		if( i != index )
		{
			spell += ( (k - c[i] ) / c[index]) ;
		}
	}
	cout << spell << "\n" ;
}

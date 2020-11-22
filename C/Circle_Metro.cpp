// Circle Metro
// https://codeforces.com/problemset/problem/1169/A
// Aman Kumar


/*
	INSIGHT:
		- Brute search if during the journey, any station matches.
	
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
	int n, a, x, b, y; 
	cin >> n >> a >> x >> b >> y ;
	
	bool ans = false ;
	
	while( a != x && a <= n+1 && b != y && b >= 0 && ans == false )
	{			
		if( a == b )
			ans = true ;
		
		a++ ;
		b-- ;	
		
		if( b == 0 )
			b = n ;
		
		if( a == n+1 )
			a = 1 ;
			
		if( a == b )
			ans = true ;
	}
	
	if( ans )
		cout << "YES\n" ;
	else
		cout << "NO\n" ;
}

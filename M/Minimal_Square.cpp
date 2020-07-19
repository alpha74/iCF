// Minimal Square
// https://codeforces.com/problemset/problem/1360/A
// Author: Aman Kumar

/*
	INSIGHT:
		
		Return square of max(largest_side, 2*smallest_side)		
*/


#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

void func() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	ll t ;
	cin >> t ;
	
	while( t-- )
	{
		func() ;
	}
	
	return 0 ;
}


void func()
{
	int a, b ;
	
	cin >> a >> b ;
	
	// Set a as largest and b as smallest
	if( a < b )
	{
		int temp = a ;
		a = b ;
		b = temp ;
	}
	
	int area = pow( max( a, b+b ) ,2 ) ;
	
	cout << area << "\n" ;
	
}

// Box is Pulll
// https://codeforces.com/problemset/problem/1428/A
// Aman Kumar


/*
	INSIGHT:
		- If totally not on a single axis, 2 more seconds are required.
	
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
	ll x1, y1, x2, y2 ;
	cin >> x1 >> y1 >> x2 >> y2 ;
	
	ll t = 0 ;
	
	if( x1 == x2  || y1 == y2 )
		t = abs(x2-x1) + abs(y2-y1) ;
	else
		t = abs(x2-x1) + abs(y2-y1) + 2 ;
	
	cout << t << "\n" ;
}

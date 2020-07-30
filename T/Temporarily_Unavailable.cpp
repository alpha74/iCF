// Temporarily Unavailable
// https://codeforces.com/problemset/problem/1282/A
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
	int a, b, c, r ;
	cin >> a >> b >> c >> r ;
	
	int lr = c-r ;
	int rr = c+ r ;
	
	if( a > b )
	{
		int temp = a ;
		a = b ;
		b = temp ;
	}
	
	int nrange = 0 ;
	
	// If distance completely inside range
	if( a >= lr && b <= rr )
		nrange = 0 ;

	// If distance completely outside range on left side or right side
	else if( b < lr || a > rr )
		nrange = b-a ;
	
	// If range completely inside distance
	else if( lr >= a && rr <= b )
		nrange = (lr-a) + (b-rr) ;
	
	// If distance partially in range on left side
	else if( a < lr && b >= lr && b <= rr )
		nrange = (lr-a ) ;
		
	// If distance partially in range on right side
	else if( a >= lr && a <= rr && b > rr )
		nrange = rr-b ;
		
	// If both coincide
	else
		nrange = 0 ;	
		
	cout << abs( nrange ) << "\n" ;
	
}

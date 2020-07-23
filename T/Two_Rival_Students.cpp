// Two Rival Students
// https://codeforces.com/problemset/problem/1257/A
// Aman Kumar

/*
	INSIGHT:
		- See code
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
	int n, x, a, b ;
	cin >> n >> x >> a >> b ;
	
	if( a > b )
	{
		int temp = a ;
		a = b ;
		b = temp ;
	}
	
	// If no swaps are possible or both are at ends
	if( x == 0 || ( a==1 && b == n ) )
		cout << abs(a-b) ;
		
	else
	{
		int bpos = b + x ;
		
		if( bpos > n )
		{
			x = bpos-n ;
			bpos = n ;
		}
		else
			x = 0 ;
		
		int apos = a ;
		
		if( x > 0 )
		{	
			apos = a - x ;
			
			if( apos < 1 )
				apos = 1 ;	
		}
		cout << abs( bpos - apos ) ;
	}
	cout << "\n" ;
}

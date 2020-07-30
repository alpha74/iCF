// LCM Problem
// https://codeforces.com/contest/1389/problem/A
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
	int l, r ;
	cin >> l >> r ;
	
	int x = -1, y = -1 ;
	
	if( l * 2 > r ) 
		x = -1 ;
	else
	{
		x = l ;
		y = x * 2 ;
	}
	
	cout << x << " " << y << "\n" ;
}

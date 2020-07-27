// 01 Game
// https://codeforces.com/problemset/problem/1373/B
// Aman Kumar

/*
	INSIGHT:
	  - Simulate and tell.
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
	string s ;
	cin >> s ;
	
	// false : alice turn, true : Bob turn
	bool turn = false ;
	bool chosen = true ;
	
	while( s.length() > 1 && chosen == true )
	{
		chosen = false ;
		int i = 1 ;
		
		// Find a different pair of 0 and 1
		for( i = 1 ; i < s.length() && chosen == false ; i++ )
		{
			if( s[i] != s[i-1] )
			{
				chosen = true ;		
			}
		}
		
		if( chosen )
		{
			i-- ;
			if( i-1 > 0 && i+1 < s.length() )
				s = s.substr( 0, i-1 ) + s.substr( i+1, s.length() - i-1 ) ;
			
			else if( i-1 > 0 )
				s = s.substr( 0, i-1 ) ;
			
			else if( i+1 < s.length() )
				s = s.substr( i+1, s.length() - i-1 ) ;
			
			else
				s = "" ;
				
			turn = !turn ;
		}
	
	}
	
	if( turn )
		cout << "DA\n" ;
	else	
		cout << "NET\n" ;
	
}

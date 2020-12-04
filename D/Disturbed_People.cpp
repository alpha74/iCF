// Distributed People
// https://codeforces.com/problemset/problem/1077/B
// Aman Kumar


/*
	INSIGHT: 
		- Find number of lights to be switched off to the right side of disturbed.
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
	//cin >> t ;
	
	while( t-- ) mandalore() ;
	
	return 0 ;
}

void mandalore()
{
	int n ;
	cin >> n ;
	
	vector<bool> l(n) ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		bool temp ;
		cin >> temp ;
		l[i] = temp ;	
	}
	
	bool disturbed = false ;
	
	// Check if at least one is disturbed
	for( int i = 1 ; i < (n-1) && disturbed == false ; i++ )
	{
		if( l[i] == 0 && l[i-1] == 1 && l[i+1] == 1 )
			disturbed = true ;
			
	}
	
	int ans = 0 ;
	
	if( disturbed )
	{
		ans = 0 ;
		for( int i = 1 ; i < n ; i++ )
		{
			// If current is disturbed
			if( l[i] == 0 && l[i-1] == 1 && l[i+1] == 1 )
			{
				ans++ ;
				
				if( i + 1 < n  && l[i+1] == 1 )
				{
					l[ i + 1 ] = 0 ;
				}
				else
				{
					if( i-1 >= 0 && l[i-1] == 1 )
						l[i-1] = 1 ;
				}
			}
		}
	}
	
	cout << ans << "\n" ;
}

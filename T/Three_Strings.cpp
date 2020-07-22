// Three Strings
// https://codeforces.com/problemset/problem/1301/A
// Aman Kumar

/*
	INSIGHT:
    - Simulation
		- See comments
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
	string a, b, c ;
	cin >> a >> b >> c ;
	
	int n = a.length() ;
	
	bool res = true ;
	for( int i = 0 ; i < n && res == true ; i++ )
	{
		// If ai and bi are same, but ci is different, res=NO
		// We have to make the swap
		if( a[i] == b[i] && b[i] != c[i] )
			res = false ;
	
		// IF both are different
		else if( a[i] != b[i] )
		{
			if( a[i] == c[i] )
				b[i] = c[i] ;
			
			else if( b[i] == c[i] )
				a[i] = c[i] ;
			
			// If none of ai or bi matches with ci	
			else
				res = false ;
		}
		
	}
	
	
	if( res == true )
		cout << "YES\n" ;
	else
		cout << "NO\n" ;
}

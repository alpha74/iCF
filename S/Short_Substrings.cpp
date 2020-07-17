// Short Substrings
// https://codeforces.com/contest/1367/problem/A
// Author: Aman Kumar
#include <bits/stdc++.h>

using namespace std ;

string geta( string &b )
{
	int bsize = b.length() ;
	
	if( bsize <= 2 )
	{
		string a = b ;
		return a ;
	}
	else
	{
		// Delete every 2 char
		string a = "" ;
		
		for( int i = 0 ; i < bsize ; i+= 2 )
		{
			a = a + b[i] ;
		}
		a += b[ bsize -1 ] ;
		return a ;
	}
}

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		string b ;
		cin >> b ;
		
		cout << geta( b ) << "\n" ;
	}
	return 0 ;
}

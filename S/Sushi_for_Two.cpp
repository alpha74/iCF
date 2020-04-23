// https://codeforces.com/gym/277353/problem/D

#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int n ;
	cin >> n ;
	
	vector<int> sushi ;
	
	// Input sushi sequence
	for( int i = 0 ; i < n ; i++ )
	{
		int temp ;
		cin >> temp ;
		
		sushi.push_back( temp ) ;
	}
	
	vector<int> trans ;
	// Get all transitions indices
	for( int i = 1 ; i < n ; i++ )
	{
		if( sushi[i] != sushi[ i-1 ] )
			trans.push_back( i -1 ) ;
	}
	

	
	int maxlen = INT_MIN ;
	
	// Iterate on transitions to get count
	for( int i = 0 ; i < trans.size() ; i++ )
	{
		
		
		int a = trans[i] ;
		int b = trans[i] + 1 ;
		int compa = sushi[a], compb = sushi[b] ;
		
		int count = 0 ;
		
		while( sushi[ a ] == compa && sushi[b] == compb && a >= 0 && b <= sushi.size() )
		{
			count++ ;

			a-- ;
			b++ ;
		}
		
		if( 2*count > maxlen ) 
			maxlen = count*2 ;
	}
	
	cout << maxlen ;
	
	return 0 ;
}

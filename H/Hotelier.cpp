// Hotelier
// https://codeforces.com/problemset/problem/1200/A
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
	
	//int t ;
	//cin >> t ;
	
	//while( t-- )
	{
		func() ;
	}
	
	return 0 ;
}


void func()
{
	int n ;
	cin >> n ;
	
	vector<bool> room(10) ;
	
	while( n-- )
	{
		char c ;
		cin >> c ;
		
		int left = 0, right = 9 ;
		
		if( c == 'L' )
		{
			while( room[ left ] == 1 )
				left++ ;
				
			room[ left ] = 1;
		}
		
		else if( c == 'R' )
		{
			while( room[right] == 1 )
				right-- ;
				
			room[ right ] = 1 ;
		}
		
		else
		{
			room[ c-48 ] = 0 ;
		}
	}
	
	for( int i = 0 ; i < 10 ; i++ )
		cout << room[ i ] ;
	
	cout << "\n" ;
}

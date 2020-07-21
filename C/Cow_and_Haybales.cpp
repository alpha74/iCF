// Cow and Haybales
// https://codeforces.com/problemset/problem/1307/A
// Aman Kumar

/*
	INSIGHT:
		- Do while d--:
			- Find first non-empty haybale from left.
			- Move 1 stack from it to its left position.
			- Decrement d
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
	int n, d ;
	cin >> n >> d; 
	
	vector<int> hay(n) ;
	
	for( int i = 0 ; i < n ; i++ )
		cin >> hay[i] ;
		
	if( n == 0 )
		cout << "0\n" ;
	
	else if( n == 1 )
		cout << hay[0] << "\n" ;
	
	else
	{
		while( d-- )
		{
			// Find first non-empty pile from left to right
			int pile = 1 ;
			
			for( ; pile < n ; pile++ )
			{
				if( hay[ pile ] > 0  )
				{
					hay[pile-1]++ ;
					hay[pile]-- ;
					break ;
				}
			}
			
		}	
		
		cout << hay[0] << "\n" ;
	}
}

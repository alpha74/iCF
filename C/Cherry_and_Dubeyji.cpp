// https://codeforces.com/gym/277765/problem/F
// Use fast-io.

#include <bits/stdc++.h>

using namespace std ;

#define N 101



int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		int num_count[ N ] = { 0 } ;
		
		int n ;
		cin >> n ;
				
		int maxN = 0 ;		
				
		// Input numbers
		for( int i = 0 ; i < n ; i++ )
		{
			int temp ;
			cin >> temp ;			
			num_count[ temp ]++ ;
			
			if( temp > maxN )
				maxN = temp ;
		}
		
		int ret = 0 ;
		
		// Loop and get xor of each sum
		for( int i = 1 ; i <= maxN ; i++ )
		{			
			ret = ret ^ num_count[ i ] ;
		}
		
		cout << ret << "\n" ;
	}
	return 0 ;
}

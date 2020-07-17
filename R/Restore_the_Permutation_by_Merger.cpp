// Restore the Permutation by Merger
// https://codeforces.com/contest/1385/problem/B
// Author: Aman Kumar
// Select unique elements in order as they appear.


#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		set<int> uniq ;
		vector<ll> p ;
		
		int n ;
		cin >> n ;
		
		for( int i = 0 ; i < 2 * n ; i++ )
		{
			int temp ;
			cin >> temp ;
			
			auto iter = uniq.find( temp ) ;
			
			if( iter == uniq.end() )
			{
				p.push_back( temp ) ;
				uniq.insert( temp ) ;
			}
		}
		
		// Print output
		for( int i = 0 ; i < p.size() ; i++ )
		{
			cout << p[i] << " " ;
		}
		cout << "\n" ;
		
	}
	
	return 0 ;
}

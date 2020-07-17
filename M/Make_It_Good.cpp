// Make It Good
// Find indices where order changes
// Author: Aman Kumar
// https://codeforces.com/contest/1385/problem/C

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
		int n;
		cin >> n ;
	
		vector<ll> a ;
	
		for( int i = 0 ; i < n ; i++ )
		{
			int temp ;
			cin >> temp ;
			a.push_back( temp ) ;
		}
		
		int p = n-1 ;
		
		// Do till an element <= current element is found backwards
		while( p-1 >= 0 && a[p-1] >= a[p] )
		{
			p-- ;
		}
		
		// Do till an element >= currrent element is found backwards
		while( p-1 >= 0 && a[p-1] <= a[p] )
		{
			p-- ;
		}
		
		// Print output
		cout << p << "\n" ;
		
	}
	
	return 0 ;
}


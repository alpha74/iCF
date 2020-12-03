// Cashier
// https://codeforces.com/problemset/problem/1059/A
// Aman Kumar


/*
	INSIGHT: 
		- 	
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
	ll n, l, a ;
	cin >> n >> l >> a ;
	
	vector<int> timing(n) ;
	vector<int> serve(n) ;
	
	ll count = 0 ;
	
	if( n > 0 )
	{
		for( int i = 0 ; i < n ; i++ )
		{
			cin >> timing[i] >> serve[i] ;
		}
		
		vector<pair<int,int>> busy ;
		
		for( int i = 0 ; i < n ; i++ )
		{
			int start = timing[i] ;
			int end = start + serve[i] ;
			
			busy.push_back( make_pair( start, end ) ) ;
		}
		
		// Before first customer arrives
		count += ( busy[0].first / a ) ;
		
		// Between customer's arriving
		for( int i = 1 ; i < busy.size() ; i++ )
		{
			int diff = busy[i].first - busy[i-1].second ;
			
			count += ( diff / a ) ;
		}
		
		// After last customer
		int diff = l - busy[ busy.size()- 1 ].second ;
		 
		count += ( diff / a ) ;
	}
	else
	{
		count += ( l / a ) ;
	}
		
	cout << count << "\n" ;
}

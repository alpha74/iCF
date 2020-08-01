// Zero Remainder Array
// https://codeforces.com/contest/1374/problem/D
// Aman Kumar


#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define ff first
#define ss second
#define MOD 1000000007

void func() ;

int main() 
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie(0) ;
	
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
	int n, k ;
	cin >> n >> k ;
	
	vector<int> a(n) ;
	
	for( int i = 0 ; i < n ; i++ )
		cin >> a[i] ;
	
	
	map<int,int> freq ;
	int maxfreq = 0 ;
	ll maxdiff = 0 ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		if( a[i] % k != 0 )
		{
			int diff = k - (a[i] % k ) ;
			
			auto iter = freq.find( diff ) ;
			
			if( iter == freq.end() )
				freq[diff] = 1 ;
			else
				freq[diff]++ ;
						
			// Get max freq
			if( freq[diff] > maxfreq )
			{
				maxfreq = freq[diff] ;
				maxdiff = diff ;
			}			
		}
	}
	
	ll steps = 0 ;
	
	auto iter = freq.begin() ;
	
	for( ; iter != freq.end() ; iter++ )
	{
		if( iter -> second == maxfreq )
			steps = k * 1ll * (iter->second -1) + (iter->first +1) ;
	}
		
	cout << steps << "\n" ;
}

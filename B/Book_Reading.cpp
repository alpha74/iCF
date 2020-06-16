// https://codeforces.com/gym/276996/problem/A
// Book Reading
// Author: Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

ll get_sum( ll &n, ll &m )
{
	if( n == m )
		return m % 10 ;
	else if( n < m ) 
		return 0 ;
	else
	{
		ll sum = 0, i = 1, d = 1 ;
		ll sum10 = 0 ;
		
		vector<ll> sums ;
		
		// Calculate sum of first 10 last digits
		for( i = 1 ; i <= 10 ; i++ )
		{
			sum10 = sum10 + (( m * i ) % 10 ) ;
			sums.push_back( sum10 ) ;
		}
		
		// Number of multiples
		d = n / m ;
		
		// All the complete cycles sum
		sum = sum + (d/10) * sum10 ;
	
		// Add leftover 
		if( d % 10 > 0 )
			sum = sum + sums[ d % 10 -1 ] ;
		
		return sum ;
	}
}

int main()
{
	int q ;
	cin >> q ;
	
	while( q-- )
	{
		ll n, m ;
		cin >> n >> m ;
		
		cout << get_sum( n, m ) << "\n" ;
		
	}
	return 0 ;
}

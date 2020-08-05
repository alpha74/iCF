// Gifts Fixing
// https://codeforces.com/contest/1399/problem/B
// Aman Kumar

/*
	INSIGHT: 
		- See code
*/

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

ll digit_sum( int n )
{
	ll sum = 0 ;
	
	while( n > 0 )
	{
		sum += (n%10) ;
		n /= 10 ;
	}
	return sum ;
}

void func()
{
	int n ;
	cin >> n ;
	
	vector<int> a(n) ;
	vector<int> b(n) ;
	
	int sa = INT_MAX ;
	int sb = INT_MAX ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> a[i] ;
		
		sa = min( sa, a[i] ) ;
	}
		
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> b[i] ;
		sb = min( sb, b[i] ) ;
	}
	
	ll moves = 0 ;	
		
	for( int i = 0 ; i < n ; )
	{
		// If both possible
		if( a[i] > sa && b[i] > sb )
		{
			int diff = min( a[i]-sa, b[i]-sb ) ;
			
			moves += diff ;
			a[i] -= diff ;
			b[i] -= diff ;
		}
		
		// If only a possible
		else if( a[i] > sa )
		{
			moves += ( a[i] -sa ) ;
			a[i] = sa ;
		}
		
		// If only b possible
		else if( b[i] > sb )
		{
			moves += ( b[i] -sb ) ;
			b[i] = sb ;
		}
		
		// Increment
		if( a[i] == sa && b[i] == sb )
			i++ ;
	}	
		
	cout << moves << "\n" ;
}

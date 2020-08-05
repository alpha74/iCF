// Remove Smallest
// https://codeforces.com/contest/1399/problem/A
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
	
	for( int i = 0 ; i < n ; i++ )
		cin >> a[i] ;
		
	bool possible = true ;
	
	if( n == 1 )
		possible = true ;
	
	else
	{
		sort( a.begin(), a.end() ) ; 	
		
		for( int i = 1 ; i < n && possible ; i++ )
		{
			if( a[i] -a[i-1] > 1 )
				possible = false ;
		}
		
	}
	
	if( possible )
		cout << "YES\n" ;
	else
		cout << "NO\n" ;
}

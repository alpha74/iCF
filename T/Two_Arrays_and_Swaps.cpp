// Two Arrays and Swaps
// https://codeforces.com/problemset/problem/1353/B
// Author: Aman Kumar

/*
	Sort both.
	Proceed only if last element of b is > first of a.
	Swap elements till b has larger values OR there is enough k.
*/


#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

void func() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	ll t ;
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
	vector<int> b(n) ;
	
	// Input a and b
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> a[i] ;
	}
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> b[i] ;
	}
	
	sort( a.begin(), a.end() ) ;
	sort( b.begin(), b.end() ) ;
	
	// If last of b is greater than first of a
	if( b[n-1] > a[0] )
	{
		int pa = 0 ;
		int pb = n-1 ;
		
		while( a[pa] < b[pb] && pa < n && pb >= 0 && k > 0 )
		{
			int temp = a[pa] ;
			a[pa] = b[pb] ;
			b[pb] = temp ;
			pa++ ;
			pb-- ;
			k-- ;
		}
	}
	
	// Calculate sum of a
	ll sum = 0 ;
	for( int i = 0 ; i < n ; i++ )
	{
		sum += a[i] ;
	}
	
	cout << sum << "\n" ;
	
}

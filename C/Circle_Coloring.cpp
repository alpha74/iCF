// Circle Coloring
// https://codeforces.com/problemset/problem/1408/A
// Aman Kumar


/*
	INSIGHT:
		- Make a separate array for storing the chosen elements.
		- Keep track of last chosen, and decide next using it.
		- Special case for last element.
	
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
	
	while( t-- ) func() ;
	
	return 0 ;
}

void func()
{
	ll n ;
	cin >> n ;
	
	vector<int> A(n), B(n), C(n) ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> A[i] ;
	}
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> B[i] ;
	}
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> C[i] ;
	}
	
	int i = 0 ;
	vector<int> D(n);
	D[i] = A[i] ;
	i++ ;
	int last = A[0] ;
	
	for( ; i < n ; i++ )
	{
		if( i != (n-1) )
		{
			if( A[i] != last )
				last = A[i] ;
		
			else if( B[i] != last )
				last = B[i] ;
			
			else
				last = C[i] ;
		}
		else
		{
			if( A[i] != last && A[i] != D[0] )
				last = A[i] ;
		
			else if( B[i] != last && B[i] != D[0] )
				last = B[i] ;
			
			else
				last = C[i] ;
		}
				
		D[i] = last ;
	}
	
	for( int i = 0 ; i < n ; i++ )
	{
		cout << D[i] << " " ;
	}
	
	cout << "\n" ;
}

// Phoenix and Balance
// https://codeforces.com/problemset/problem/1348/A
// Aman Kumar

/*
	INSIGHT:
		- Sum first (n/2)-1 in sum1
		- Sum next (n/2) in sum2
		- Add last i.e nth in sum1
		- Return |sum1-sum2|
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
	
	while( t-- )
	{
		func() ;
	}
	
	return 0 ;
}


void func()
{
	int n ;
	cin >> n ;
	
	int i = 1 ;
	ll sum1 = 0, sum2 = 0 ;
	
	// Add first (n/2)-1
	for( ; i <= n/2 -1 ; i++ )
	{
		sum1 += pow(2, i) ;
	}
	
	// Add next (n/2)
	for( ; i < n ; i++ )
		sum2 += pow( 2, i ) ;
	
	// Add last
	sum1 += pow( 2, i ) ;
	
	cout << abs( sum2 - sum1 ) << "\n" ;
}
